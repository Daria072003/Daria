#include<iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    int** arr = new int* [N];
    for (int i = 0; i < N; ++i) {
        arr[i] = new int[M];
    }
    int right = M-1; int left = 0; int top = 0; 
    int bottom = N - 1; int k = 0;
    while (k < (N * M + 1)) {
        for (int i = left; i <= right; ++i) {
            ++k;
            if (k > (N * M)) {
                break;
            }
            arr[top][i] = k;
        }
        ++top;
        for (int i = top; i <= bottom; ++i) {
            ++k;
            if (k > (N * M)) {
                break;
            }
            arr[i][right] = k;
        }
        --right;
        for (int i = right; i >= left; --i) {
            ++k;
            if (k > (N * M)) {
                break;
            }
            arr[bottom][i] = k;
        }
        --bottom;
        for (int i = bottom; i >= top; --i) {
            ++k;
            if (k > (N * M)) {
                break;
            }
            arr[i][left] = k;
        }
        ++left;
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < N; ++i) {
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}
