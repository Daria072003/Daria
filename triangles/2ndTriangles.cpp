#include<iostream>

int main() {
    int x;
    std::cin >> x;
    int x2 = x;
    for (int i = 1; i <= x; ++i) {
        for (int k = (x2 - 1); k >= 1;--k) {
            std::cout << " ";
        }
        --x2;
        for (int j = 1; j <= (i * 2 - 1); ++j) {
            std::cout  << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
