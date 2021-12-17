#include<iostream>

int main() {
    int N;
    int A[1000];
    std::cin >> N;
    for (int i = 1; i <= N; ++i) {
        std::cin >> i[A];
    }
    int S = 0;
    int ind = 0;
    for (int i = 1; i <= N; ++i) {
        if ((A[i] + A[i + 1]) > S) {
            S = A[i] + A[i + 1];
            ind = i;
        }
    }
    std::cout << A[ind] << " " << A[ind + 1];
    return 0;
}
