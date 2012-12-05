#include "Entry.h"

template <typename V>
Entry<V>::Entry(string k, V v){
  key = k;
  value = v;
}

template <typename V>
Entry<V>::~Entry(){

}

template <typename V>
string Entry<V>::getKey(){
  return key;
}

template <typename V>
V Entry<V>::getValue(){
  return value;
}

template <typename V>
void Entry<V>::setValue(V v){
  value = v;
}

template class Entry<int>;
template class Entry<string>;
template class Entry<double>;
