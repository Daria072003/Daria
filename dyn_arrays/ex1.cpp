#include<iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    int** a = new int*[N];
    for (int i = 0; i < N; ++i) {
        a[i] = new int[M];
    }
    int k = 0;
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < M; ++j) {
                ++k;
                a[i][j] = k;
            }
        }
        else {
            for (int j = M-1; j >= 0; --j) {
                ++k;
                a[i][j] = k;
            }
        }       
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < N; ++i) {
        delete[] a[i];
    }
    delete[] a;
}
