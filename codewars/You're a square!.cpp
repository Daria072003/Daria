#include<iostream>
#include<cmath>
bool is_square(int n)
{
    for (int i = 0; i <= (n / 2 + 1); ++i) {
        if (pow(i,2) == n) {
            return true;
        }
    }
    return false;
}
