#include <boost>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>


typedef boost::variant<int, float, double, char, string> myvariant;

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

  void print(int salida) {
    std::cout << salida;
  }

  void print(float salida) {
    std::cout << salida;
  }

  void print(double salida) {
    std::cout << salida;
  }

  void print(char salida) {
    std::cout << salida;
  }

  void print(string salida) {
    std::cout << salida;
  }

  void print(vector<myvariant> salida) {
    std::cout << abrir;
    for(int i = 0; i < salida.size()-1; ++i) {
      print(salida[i]);
      std::cout << separador;
    }
    print( salida[salida.size()-1] );
    std::cout << cerrar;
  }

  void print(list<myvariant> salida) {
    std::cout << abrir;
    auto itend = salida.end(); itend--;
    for(auto it = salida.begin(); it != itend; ++it){
      print(*it);
      std::cout << separador;
    }
    print(*itend);
    std::cout << cerrar;
  }


};
