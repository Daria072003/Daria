#include<iostream>

int main() {
    int N;
    char OST[1000];
    int k = 0;
    std::cin >> N;
    while (N != 0) {
        k = k + 1;
        if ((N % 16) < 10) {    
            OST[k] = '0' + N % 16;
        }
        else {
            OST[k] = char((N % 16) + 55);
        }
        N = N / 16;
    }
    for (int i = k; i >= 1; --i) {
        std::cout << OST[i];
    }
}
