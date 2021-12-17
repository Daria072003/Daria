#include<iostream>

#include <string>
using namespace std;

string reverseString(string ss)
{

    string k = "";
    for (int i = ss.length() - 1; i >= 0; i--)
    {
        k = k + ss[i];
    }

    return k;
}
