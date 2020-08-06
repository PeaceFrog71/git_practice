#include <iostream>
#include <string>
#include "functions.hpp"
using namespace std;


int main(){
  string word = "broccoli";
  string text = "The most green of all the broccoli has to be broccoli.";
  string text2 = "broccoli broccolibroccolibroccolibroccoli broccoli";

  bleep(word, text);
  bleep(word, text2);
  cout << text <<  endl;


  cout << text2 << endl;


  return 0;
}
