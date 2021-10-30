#include<iostream>

int main() {
    int n;
    std::cin >> n;
    int max = 0;
    int k = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = n * 3 + 1;
        }
        if (n > max){
            max = n;
        }
        ++k;
    }
    std::cout << k << " " << max;
}
