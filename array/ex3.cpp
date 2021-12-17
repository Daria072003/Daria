#include<iostream>

int main() {
    int N;
    char OST[1000];
    int k = 0;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите десятичное число>";
    std::cin >> N;
    while (N != 0) {
        k = k + 1;
        if ((N % 16) < 10) {
            OST[k] = '0' + N % 16;
        }
        else {
            OST[k] = char((N % 16) + 55);
        }
        N = N / 16;
    }
    std::cout << "Число в 16-ой системе счисления = ";
    for (int i = k; i >= 1; --i) {
        std::cout << OST[i];
    }
    std::cout << "\n";
    std::string STR;
    std::cout << "Введите число в 16-ой системе счисления>";
    std::cin >> STR;
    int S = 0;
    for (int i = 0; i < STR.length(); ++i) {
        if (STR[i] >= 'A') {
            STR[i] = STR[i] - 55;
            S += int(STR[i])*pow(16,STR.length()- (i+1));
        }
        else {
            S += (STR[i] - '0')* pow(16, STR.length() - (i+1));
        }
    }
    std::cout << "Число в 10-ой системе счисления = " << S;
    return 0;
}
