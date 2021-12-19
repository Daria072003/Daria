#include<iostream>

void snakeArray(int** A, int n, int D) {
    int k = 0;
    if (D == 1) {
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                for (int j = 0; j < n; ++j) {
                    ++k;
                    A[i][j] = k;
                }
            }
            else {
                for (int j = n - 1; j >= 0; --j) {
                    ++k;
                    A[i][j] = k;
                }
            }
        }
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                for (int j = n - 1; j >= 0; --j) {
                    ++k;
                    A[i][j] = k;
                }
            }
            else {
                for (int j = 0; j < n; ++j) {
                    ++k;
                    A[i][j] = k;
                }
            }
        }
    }
}

int main() {
    int N, d;
    std::cin >> N;
    std::cin >> d;
    int** arr = new int* [N];
    for (int i = 0; i < N; ++i) {
        arr[i] = new int[N];
    }
    snakeArray(arr, N, d);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < N; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
