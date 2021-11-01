#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int A[100000];
    int B[100000];
    for (int i = 0; i <= N; ++i) {
        B[i] = 0;
    }
    for (int i = 1; i <= N; ++i) {
        std::cin >> A[i];
        B[A[i]] = 1;
    }
    for (int i = 0; i <= N; ++i) {
        if (B[i] == 0) {
            std::cout << i;
        }
    }
}
