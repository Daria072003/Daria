#include <string>

std::string number_to_string(int num) {
  std::string result = "";
  bool negative = num < 0;
  num = negative ? -num : num;
  
  do {
    int digit = num % 10;
    result = char('0' + digit) + result;
    num /= 10;
  } while (num > 0);
  
  return negative ? "-" + result : result;
}
