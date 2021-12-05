#include <iostream>
#include <string>
#include "palindromes.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main(){
  string s1 = "abcdcba";
  string s2 = "abcdefg";

  cout << "s1 : " << s1 << endl;
  if(isPalindrome(s1)){
    cout << "s1 is a palindrome" << endl;
  } else {
    cout << "s1 is not a palindrome" << endl;
  }

  cout << "s2 : " << s2 << endl;
  if(isPalindrome(s2)){
    cout << "s2 is a palindrome" << endl;
  } else {
    cout << "s2 is not a palindrome" << endl;
  }

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
