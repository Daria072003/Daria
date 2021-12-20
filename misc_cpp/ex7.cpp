#include <iostream>
long long int F(long long int R) {
    long long int counter = -1;
    for (long long int x = 0; x <= R; ++x) {
        for (long long int y = 0; y <= R; ++y) {
            if ((x * x + y * y) <= R * R) {
                ++counter;
            }
        }
    }
    return counter;
}

int main() {
    int R;
    std::cin >> R;
    std::cout << 1 + F(R) * 4 - 4 * R;
    return 0;
}
