#include <iostream>
#include <string>

int main()
{
    int number, n;
    std::cin >> number >> n;
    std::string result = "";
    std::string symbols[] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F" };
    int str_size = 0;
    while (number > 0)
    {
        int digit = number % n;
        result = result + symbols[digit];
        number = number / n;
        str_size++;
    }
    int i = str_size - 1;
    while (i >= 0)
    {
        std::cout << result[i];
        i--;
    }
    return 0;
}
