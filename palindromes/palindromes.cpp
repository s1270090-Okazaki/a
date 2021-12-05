#include <iostream>
#include <string>
#include "palindromes.h"

using std::cout;
using std::endl;
using std::string;
using std::equal;
using std::remove;

bool isPalindrome(string s){
  string tmp = s;
    transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
    tmp.erase(remove(tmp.begin(), tmp.end(), ' '), tmp.end());

    if (equal(tmp.begin(), tmp.begin() + tmp.size()/2, tmp.rbegin())) {
        return true;
    } else {
        return false;
    }
}
