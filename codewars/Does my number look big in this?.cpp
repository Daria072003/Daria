#include<cmath>
#include<iostream>
bool narcissistic( int value ){
  int sum = value;
  int power = 0;
  int digits[10] = {0,0,0,0,0,0,0,0,0,0};
  
  do {
    digits[power] = sum % 10;
    power++;
    sum /= 10;
  } while (sum);
  
  for (int i = 0; i < 10; ++i) {
    sum += int(pow(digits[i], power));
  }
  
  return sum == value;
}
