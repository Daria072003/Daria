#include <iostream>

int main(){
    int num;
    std::cout << "num = ";
    std::cin >> num;
    int digit;
    int sum = 0;
    int prod = 1;
    while (num != 0){
        digit = num % 10;
        sum += digit;
        prod *= digit;
        num /= 10;
    }
    std::cout << "sum = " << sum << "\n";
    std::cout << "prod = " << prod << "\n";
    return 0;
}
