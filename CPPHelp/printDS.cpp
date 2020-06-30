#include "printDS.h"

template <class T>

void printnum(T num){
  cout << num << endl;
}

void printPair(pair<int, int> p)
{
  cout << p.first << ' ' << p.second;
}

void printPairP(pair<pair<int, int>, int> p)
{
  printPair(p.first);
  cout << ' ' << p.second;
}

void printPairPP(pair<int, pair<int, int>> p)
{
  cout << p.first << ' ';
  printPair(p.second);
}

void printVector(vector<int> v)
{
  for(int i = 0; i < v.size()-1; ++i) cout << v[i] << ' ';
  cout << v[v.size()-1];
}

void printList(list<int> l)
{
  auto itend = l.end(); itend--;
  for(auto it = l.begin(); it != itend; ++it) cout << *it << ' ';
  cout << *itend;
}
