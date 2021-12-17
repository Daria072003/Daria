#include <iostream>

int main() {
    double x, y;
    std::cin >> x;
    std::cin >> y;

    if (y < 0 && (((x - 1) * (x - 1) + y * y <= 1)) || ((x + 1) * (x + 1) + y * y <= 1)){
        std::cout << "Yes" << std::endl;
    }
    else if (y >= 0 && (y <= 2 - x * 2.) && (y <= 2 + 2 * x)){
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }
    return 0;
}
