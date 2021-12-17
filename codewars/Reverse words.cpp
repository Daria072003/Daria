#include <string>

std::string reverse_words(std::string str)
{
    std::string k = "";
    std::string rev = "";
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ') {
            k.push_back(str[i]);
        }
        else {
            while (not(k.empty())) {
                rev.push_back(k.back());
                k.pop_back();
            }
            rev += " ";
        }
    }
    while (not(k.empty())) {
        rev.push_back(k.back());
        k.pop_back();
    }
    return rev;
}
