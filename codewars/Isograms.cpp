bool is_isogram(std::string str) {
    int k = 0;
    for (int i = 0; i < str.length(); ++i) {
        for (int j = 0; j < str.length(); ++j) {
            if ((i != j) && (str[i] == str[j]  || toupper(str[i]) == str[j])) {
                ++k;
            }
        }
    }
    if (k == 0) {
        return true;
    }
    else {
        return false;
    }
}
