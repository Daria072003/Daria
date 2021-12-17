#include <string>
using namespace std;

int sum_divisors(int n) {
    int sum = 0;
    for (int i = 1; i*i < n+1; i++) {
        if (n % i == 0) {
            sum += i;
        if (n / i != i) {
            sum += n / i;
            }
        }
    }
    return sum - n;
}

namespace Bud{
  string buddy(long long start, long long limit){
    bool flag = true;
    int number1 = 0; int number2 = 0; int divisors;
    for (int i = start; i < limit; ++i){
        number1 = i;
        if (flag == false) {
            break;
        }
        divisors = sum_divisors(number1);
        for (int j = i + 1; j < divisors; ++j){
            number2 = j;
            if (divisors - 1 == number2 and sum_divisors(number2) - 1 == number1) {
                flag = false;
                break;
            }
        }
    }
    std::string result;
    if (number1 != (limit - 1)) {
      result = "(" + std::to_string(number1 - 1) + " " + std::to_string(number2) + ")";
    }
    else {
      result = "Nothing";
    }
    return result;
  }
}
