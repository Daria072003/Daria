#include<vector>
bool isAscOrder(std::vector<int> arr){
    int k = 0;
    for (int i = 0; i < arr.size()-1; ++i) {
        if (arr[i] < arr[i + 1]) {
            ++k;
        }
    }
    if (k == arr.size()-1) {
        return true;
    }
    else {
        return false;
    }
}
