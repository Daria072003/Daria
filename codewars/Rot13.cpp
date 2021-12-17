#include <string>

std::string rot13(std::string str) {
    std::string result = "";
    
    for (int i = 0; i < str.length(); ++i) {
        int letter = (int)(str[i]);
        
        if (letter >= 'a' && letter <= 'z') {
            int c = (letter + 13);
            if (c > 'z') {
                c = c - 'z' + 'a' -1;
            }
            result += (char)c;
            continue;
        }

        if (letter >= 'A' && letter <= 'Z') {
            int c = (letter + 13);
            if (c > 'Z') {
                c = (c - 'Z' + 'A' - 1);
            }
            result += (char)c;
            continue;
        }

        result += str[i];
    }
    
    return result;
}
