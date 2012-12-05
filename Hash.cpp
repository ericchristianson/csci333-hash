#include "Hash.h"

template <typename V>
Hash<V>::Hash(int s){
  size = s;
  table.resize(size);
}

template <typename V>
void Hash<V>::insert(string k, V v){
  int x = hash(k);
  for(int i=0; i < (int) table[x].size(); ++i){
    if(table[x][i].getKey() == k){
      table[x][i].setValue(v);
    }
  }
  table[x].push_back(Entry<V>(k, v));
}

template <typename V>
V Hash<V>::find(string k){
  int x = hash(k);

  for(int i=0; i < (int) table[x].size(); ++i){
    if(table[x][i].getKey() == k){
      return table[x][i].getValue();
    }
  }
  //not found
  std::cout << "Key does not exist." << std::endl;
  return (V) 0;
}

template <typename V>
void Hash<V>::remove(string k){
  int x = hash(k);
  for(int i=0; i < (int) table[x].size(); ++i){
    if(table[x][i].getKey() == k){
       table[x].erase(table[x].begin() + 1);
    }
  }
}

template <typename V>
int Hash<V>::hash(string s){
  int sum = 0;
  for(int i=0; i< (int) s.size(); i++){
    sum += (int) s[i];
  }
  sum = sum % size;
  return sum;
}

template class Hash<int>;
template class Hash<string>;
template class Hash<double>;
