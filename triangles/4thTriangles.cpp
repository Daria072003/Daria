#include<iostream>
int main() {
    int n, x, x2,z;
    std::cin >> n;
    std::cin >> z;
    x = n + 1;
    x2 = x;
    int r = 0;
    for (int i = 1; i <= x; ++i) {
        while (r != z) {
            for (int k = (x2 - 1); k >= 1; --k) {
                std::cout << " ";
            }
            for (int j = 1; j <= (i * 2 - 1); ++j) {
                std::cout << "*";
            }
            for (int k = (x2 - 1); k >= 1; --k) {
                std::cout << " ";
            }
            ++r;
        }
        --x2;
        r = 0;
        std::cout << "\n";
    }
    r = 0;
    x2 = 1;
    for (int i = (x - 1); i >= 1; --i) {
        while (r != z) {
            for (int k = 1; k <= x2; ++k) {
                std::cout << " ";
            }
            for (int j = 1; j <= (i * 2 - 1); ++j) {
                std::cout << "*";
            }
            for (int k = 1; k <= x2; ++k) {
                std::cout << " ";
            }
            ++r;
        }
        std::cout << "\n";
        ++x2;
        r = 0;
    }
    system("pause");
    return 0;
}
