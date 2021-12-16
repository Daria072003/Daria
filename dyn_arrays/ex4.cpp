#include<iostream>
#include<cmath>

double mysqrt(double x, double eps = 1e-6) {
    double curr = 1.0;
    double next = curr - (curr * curr - x) / (2 * curr);
    while (std::abs(curr - next) > eps) {
        curr = next;
        next = curr - (curr * curr - x) / (2 * curr);
    }
    return next;
}

int main() {
    int X;
    std::cin >> X;
    std::cout << mysqrt(X);
}
