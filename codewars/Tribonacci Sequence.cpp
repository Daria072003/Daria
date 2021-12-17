std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
  
    if (n == 0) {
      return result;
    }
  
    if (n < 3) {
      for (int i = 0; i < n; ++i) {
        result.push_back(signature[i]);
      }
      return result;
    }
  
    result = signature;
  
    for (int i = 3; i < n; ++i) {
      result.push_back(result[i-3] + result[i-2] + result[i-1]);
    }
    
    return result;
}
