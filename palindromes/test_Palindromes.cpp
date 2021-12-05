#include <iostream>
#include <string>
#include "palindromes.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main(){

  string input;
  while(1){
    cout << "-> ";
    cin >> input;
    if(input == "exit") break;

    if(isPalindrome(input)){
      cout << "palindrome" << endl;
    } else {
      cout << "not palindrome" << endl;
    }
  }

  return 0;
}
