#include <iostream>
#include <string>
#include <vector>
using namespace std;


void mark(int const &word_start, string const &word, string &text){
  for (int c = word_start; c < word_start + word.size(); c++ ){
    text[c]= '*';
  }
}

string bleep(string const &word, string &text){
  int word_start = 0;
  for (int i = 0; i < text.size(); i++){
    for (int j = 0; j < word.size(); j++){
      if (text[i] == word[0]){
        word_start = i;
        while (text[i] == word[j]){
            j++;
            i++;
          if (j == (word.size()-1)){
            mark(word_start, word, text);
            word_start = 0;
            j++;
          }
        }
      }
    }
  }
  return text;
}  
