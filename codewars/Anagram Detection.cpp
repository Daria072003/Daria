#include <string>

bool isAnagram(std::string test, std::string original) {
  if (test.length() != original.length()) {
    return false;
  }
  
  int letters_1[26];
  int letters_2[26];
  
  for (int i = 0; i < 26; ++i) {
    letters_1[i] = 0;
    letters_2[i] = 0;
  }
  
  char letter_1, letter_2;
  for (int i = 0; i < test.length(); ++i) {
    letter_1 = std::tolower(test[i]);
    letter_2 = std::tolower(original[i]);
    
    letters_1[int(letter_1) - 'a'] += 1;
    letters_2[int(letter_2) - 'a'] += 1;
  }
  
  for (int i = 0; i < 26; ++i) {
    if (letters_1[i] != letters_2[i]) {
      return false;
    }
  }
  
  return true;
}
