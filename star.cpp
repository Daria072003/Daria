#include <iostream>
#include <cmath>

bool in_star(double x, double y)
{
    double r = std::sqrt(x * x + y * y);
    double a = 0.0;

    if (x > 0.0){
        if (y >= 0.0){
            a = std::atan(y / x);
        }
        else{
            a = std::atan(y / x) + 2 * M_PI;
        }
    }
    else if (x < 0.0){
        a = std::atan(y / x) + M_PI;
    }
    else{
        if (y > 0.0){
            a = M_PI_2;
        }
        else if (y < 0.0){
            a = 3 * M_PI_2;
        }
    }

    double srad = 5.0 * std::cos((2 * std::asin(1.0) + M_PI * 3) / 10) / std::cos((2 * std::asin(cos(5.0 * a)) + 3.0 * M_PI) / 10);

    bool in_star = r <= srad;

    return in_star;
}

int main()
{
    double x, y;
    std::cin >> x >> y;

    std::cout << "In star: " << in_star(x, y) << std::endl;

    return 0;
}
