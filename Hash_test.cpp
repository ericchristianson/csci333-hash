#include "Hash.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(){

  Hash<int>* tab = new Hash<int>(100);
  tab->insert("chickin" , 5);
  tab->insert("car" , 1);
  tab->insert("asdf", 3);
  cout << tab->find("chickin") <<  endl;
  cout << tab->find("asdf") << endl;
  tab->remove("car");
  cout << tab->find("car");
  delete tab;
  return 0;
}
