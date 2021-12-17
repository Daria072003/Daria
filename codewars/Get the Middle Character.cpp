std::string get_middle(std::string input)
{
    std::string s = "";
    if (input.length() % 2 == 0) {
        s += input[input.length() / 2 - 1] ;
        s += input[input.length() / 2];
    }
    else {
        s += input[input.length() / 2];
    }
    return s;
}
