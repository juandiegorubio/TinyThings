#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <boost/variant.hpp>


typedef boost::variant<int, float, double, char, std::string> myvariant;

class Printer {

private:
  char separador = ',';
  char abrir = '[';
  char cerrar = ']';

public:
  Printer() {}

  Printer(char sep, char ab, char cer) {
    separador = sep;
    abrir = ab;
    cerrar = cer;
  }

  void print(myvariant salida) {
    std::cout << salida;
  }

  void print(std::vector<myvariant> salida) {
    std::cout << abrir;
    for(int i = 0; i < salida.size()-1; ++i) {
      print(salida[i]);
      std::cout << separador;
    }
    print( salida[salida.size()-1] );
    std::cout << cerrar;
  }

  void print(std::list<myvariant> salida) {
    std::cout << abrir;
    auto itend = salida.end(); itend--;
    for(auto it = salida.begin(); it != itend; ++it){
      print(*it);
      std::cout << separador;
    }
    print(*itend);
    std::cout << cerrar;
  }

  void print(std::set<myvariant> salida) {
    std::cout << abrir;
    auto itend = salida.end(); itend--;
    for(auto it = salida.begin(); it != itend; ++it){
      print(*it);
      std::cout << separador;
    }
    print(*itend);
    std::cout << cerrar;
  }

  void print(std::unordered_set<myvariant> salida) {
    std::cout << abrir;
    auto itend = salida.end(); itend--;
    for(auto it = salida.begin(); it != itend; ++it){
      print(*it);
      std::cout << separador;
    }
    print(*itend);
    std::cout << cerrar;
  }


  void print(std::unordered_map<myvariant, myvariant> salida) {
    std::cout << abrir;
    auto itend = salida.end(); itend--;
    for(auto it = salida.begin(); it != itend; ++it){
      std::cout << abrir;
      print(it->first);
      std::cout << separador;
      print(it->second);
      std::cout << cerrar << ' ';
    }
    std::cout << abrir;
    print(itend->first);
    std::cout << separador;
    print(itend->second);
    std::cout << cerrar << cerrar;
  }

};
