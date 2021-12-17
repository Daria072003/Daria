#include <string>
int find_short(std::string str)
{
    int min = str.length();
    for (int i = 0; i < (int)str.size(); ++i) {
        int len = 0;
        while (str[i] != ' ' && i < (int)str.size()) {
            ++len;
            ++i;
        }
        if (len < min) {
            min = len;
        }
    }
    return min;
}
