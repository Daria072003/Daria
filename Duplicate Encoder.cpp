#include <string>
std::string duplicate_encoder(const std::string& word){
int letters[26];
char letter;
std:: string STR = "";
for(int i = 0; i < 26; ++i){
 letters[i] = 0;
}
for (int i = 0; i < word.length(); ++i) {
 letter = std::tolower(word[i]);
 letters[int(letter) - 'a'] += 1;
}
for(int i = 0; i < word.length(); ++i){
 letter = std::tolower(word[i]);
 if(letters[int(letter)-'a'] > 1){
   STR+=')';
 }
 else{
   STR+='(';
 }
}
return STR;
}
