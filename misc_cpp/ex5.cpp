#include <iostream>
int main(){
    double a, b, c, d, x;
    std::cin >> a >> b >> c >> d >> x;
    double y = 0.0;
    y = c + (x - a) * (d - c) / (b - a);
    std::cout << y;
    return 0;
}
