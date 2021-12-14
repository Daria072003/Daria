#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

std::string intToHex(int number, char filler = '0', int length = 10)
{
    setlocale(LC_ALL, "Russian");
    std::stringstream stream;

    stream << std::setfill(filler) << std::setw(length) << std::uppercase << std::hex << number;
    return stream.str();
}

std::string readLine(std::istream& input)
{
    setlocale(LC_ALL, "Russian");
    std::string hexes = "";
    std::string text = "";
    int symbolNumber = 0;
    char symbol;
    do
    {
        input >> std::noskipws >> symbol;
        text += symbol < 32 ? ' ' : symbol;
        hexes += intToHex((int)symbol, '0', 2) + " ";
        if (symbolNumber == 7)
        {
            hexes += "| ";
        }
        symbolNumber++;
        if (input.eof())
        {

            for (int i = symbolNumber; i < 16; ++i)
            {
                hexes += "   ";
                if (i == 7)
                {
                    hexes += "| ";
                }
            }
            break;
        }
    } while (symbolNumber < 16);

    return hexes + text;
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");
    if (argc < 3) {
        std::cout << "Invalid argument input: missing inputFilename or outputFilename";
        return -1;
    }

    std::ifstream inputFile(argv[1]);
    std::ofstream outputFile(argv[2]);

    if (!inputFile.is_open()) {
        std::cout << "Input Filename could not open";
        return -2;
    }
    if (!outputFile.is_open()) {
        std::cout << "Output Filename could not open";
        return -2;
    }

    int lineNumber = 0;
    std::string line;
    while (true)
    {
        outputFile << intToHex(lineNumber) << ": " << readLine(inputFile) << std::endl;
        lineNumber += 16;
        if (inputFile.eof())
        {
            break;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
