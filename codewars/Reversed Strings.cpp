#include <string>
using namespace std ; 

string reverseString (string str ){
  char curr;
  for(int i = 0; i < str.length()/2; ++i){
    curr = str[i];
    str[i]=str[str.length() - i - 1];
    str[str.length()- i - 1] = curr;
  }
  return str;
}
