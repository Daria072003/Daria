#include <iostream>

int main()
{
    const int N = 3;
    double coeffs[N] = { 1,2,3 };
    double x;
    std::cout << "x = ";
    std::cin >> x;
    double px = 1;
    double sum1 = 0;
    for (int i = 0; i < N; ++i) {
        sum1 += coeffs[i] * px;
        px *= x;
    }
    double sum2 = 0;
    for (int i = N - 1; i >= 0; --i)
        sum2 = coeffs[i] + sum2 * x;

    std::cout << "p1(" << x << ") = ";
    std::cout << sum1 << "\n";
    std::cout << "p2(" << x << ") = ";
    std::cout << sum2 << "\n";
    return 0;
}
