#include <iostream>
int F(int R) {
    int counter = -1;
    for (int x = 0; x <= R; ++x) {
        for (int y = 0; y <= R; ++y){
            if ((x * x + y * y) <= R*R) {
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
