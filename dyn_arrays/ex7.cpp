#include<iostream>

void shiftArray(int* A, int n, int k) {
    int* B = new int[n];
    for (int i = 0; i < n; ++i) {
        if (i < k) {
            B[n - k + i] = A[i];
        }
        else {
            B[i - k] = A[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        A[i] = B[i];
    }
    delete[] B;
}

int main() {
    int N, z;
    std::cin >> N >> z;
    int* arr = new int[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }
    shiftArray(arr, N, z);
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
