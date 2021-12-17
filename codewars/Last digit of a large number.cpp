#include <string>
#include <cmath>

int last_digit(const std::string& str1, const std::string& str2){
    int l1 = str1.length(), l2 = str2.length();
    int len = l2;
    if (l1 == 1 && l2 == 1 && str1[0] == '0' && str2[0] == '0')
        return 1;

    if (l2 == 1 && str2[0] == '0')
        return 1;

    if (l1 == 1 && str1[0] == '0')
        return 0;

    int st = 0; int result;
    for (int i = 0; i < len; i++)
        st = (st * 10 + str2[i] - '0') % 4;

    if (st == 0){
      result = std::pow(str1[l1 - 1] - '0', 4);
    }
    else{
      result = std::pow(str1[l1 - 1] - '0', st);
    }

    return result % 10;
}
