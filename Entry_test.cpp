#include "Entry.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){

  Entry<string> s("hello", "goodbye");

  cout << "Key: " << s.getKey() << endl;
  cout << "Val: " << s.getValue() << endl;

}
