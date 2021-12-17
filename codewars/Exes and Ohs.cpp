bool XO(const std::string& str)
{
    int kx = 0;
    int ko = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == 'x' || str[i] == 'X') {
            ++kx;
        }
        if (str[i] == 'o' || str[i] == 'O') {
            ++ko;
        }
    }
    if (kx == ko) {
         return true;
    }
    else {
        return false;
    } 
}
