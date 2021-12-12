#include <iostream>
int main() {
    int n, numdeg;
    std::cin >> n >> numdeg;
    int d = 1;
    int n_tmp = n;
    while ((n_tmp /= numdeg) != 0)
        d *= numdeg;
    while (d != 0) {
        if ((n / d) < 10) {
            std::cout << (n / d);
        }
        else {
            std::cout << char(((n / d) % 10) + 65);
        }
        n %= d;
        d /= numdeg;
    }
    std::cout << std::endl;
    return 0;
}
