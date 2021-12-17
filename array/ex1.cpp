#include<iostream>

int main() {
    int First[3];
    int Second[3];
    int Result[3];
    for (int i = 0; i < 3; ++i) {
        std::cin >> First[i];
    }
    for (int i = 0; i < 3; ++i){
        std::cin >> Second[i];
        Result[i] = Second[i]-First[i];
    }
    for (int i = 1; i < 3; ++i) {
        if (Result[i] < 0) {
            Result[i - 1] -= 1;
            Result[i] = 60 + Result[i];
        }
    }
    for (int i = 0; i < 3; ++i) {
        std::cout << Result[i] << " ";
    }
    return 0;
}
