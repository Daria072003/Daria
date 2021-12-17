#include <iostream>
int main() {
    int n;
    std::cout << "Enter n:";
    std::cin >> n;
    double flag = 0.;
    for (int i = 0; i < n; i++)
    {
        double x = (double)rand() / RAND_MAX, y = (double)rand() / RAND_MAX;
        flag += (x * x + y * y);
        if (flag <= 1){
          flag += 1;
        }
    }
    std::cout << (flag / (double)n) << std::endl;
    return 0;
}
