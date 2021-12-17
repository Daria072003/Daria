#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    long int min1, min2;
    if (numbers[0] < numbers[1]) {
         min1 = numbers[0];
         min2 = numbers[1];
    }
    else {
        min2 = numbers[0];
        min1 = numbers[1];
    }
    
    for (int i = 2; i < numbers.size(); ++i) {
        if (numbers[i] < min1) {
            min2 = min1;
            min1 = numbers[i];
        }
        else if (numbers[i] < min2) {
                  min2 = numbers[i];
        }
    }
    return min1+min2;
}
