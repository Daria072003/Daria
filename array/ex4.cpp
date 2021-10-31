#include<iostream>

int main() {
    int N;
    int A[1000];
    std::cin >> N;
    for (int i = 1; i <= N; ++i) {
        std::cin >> i[A];
    }
    int X = N;
    for (int i = 1; i <= N/2; ++i) {
        std::cout << A[i] << " ";
        std::cout << A[X] << " ";
        --X;
    }
    if (N % 2 != 0) {
        std::cout << A[N / 2] + 1;
    }
}
