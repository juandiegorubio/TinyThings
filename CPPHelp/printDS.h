// printSTD.h

#include <iostream>
#include <utility>
#include <vector>
#include <list>
using namespace std;

template <class T>

  void printnum(T num);
  // Muestra por pantalla un par de datos únicos (no estructuras de datos);
  void printPair(pair<int, int> p);
  // Muestra por pantalla un par de datos, el primero un pair, el segundo único;
  void printPairP(pair<pair<int, int>, int> p);
  // Muestra por pantalla un par de datos, el primero único, el segundo un pair;
  void printPairPP(pair<int, pair<int, int>> p);

  // Muestra por pantalla un vector de datos únicos;
  void printVector(vector<int> v);

  // Muestra por pantalla una lista de datos únicos;
  void printList(list<int> l);

  // Muestra por pantalla un conjunto de datos únicos;
  // void
