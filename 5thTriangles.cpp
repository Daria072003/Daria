#include<iostream>

int main() {
    int x, N;
    std::cin >> N;
    x = N / 2 + 1;
    int x2 = x;
    for (int i = 1; i <= x; ++i) {
        for (int k = (x2 - 1); k >= 1;--k) {
            std::cout << " ";
        }
        --x2;
        for (int j = 1; j <= (i * 2 - 1); ++j) {
            if (j % 2 == 0) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
    x2 = 1;
    for (int i = (x - 1); i >= 1; --i) {
        for (int k = 1; k <= x2; ++k) {
            std::cout  << " ";
        }
        ++x2;
        for (int j = 1; j <= (i * 2 - 1); ++j) {
            if (j % 2 == 0) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
}