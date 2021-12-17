#include <vector>
int maxSequence(const std::vector<int>& arr){
    int max2 = 0;
    int max = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++){
            max2 = 0;
            for (int k = i; k <= j; k++){
                max2 += arr[k];
            }
            if (max2 > max){
              max = max2;
            }
        }
    }
  return max;
}
