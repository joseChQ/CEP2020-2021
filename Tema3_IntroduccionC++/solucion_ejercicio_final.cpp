#include <iostream>
using namespace std;

int main() {
  string nombre1 = "Alonso";
  string apellido1 = "Valdivia";
  float estatura1 = 1.65;
  int nacimiento1 = 2000;
  int edad1 = 2021 - nacimiento1;

  string nombre2 = "Jose";
  string apellido2 = "Valdivia";
  float estatura2 = 1.73;
  int nacimiento2 = 1997;
  int edad2 = 2021 - nacimiento2;

  bool mayor = edad1 > edad2;
  bool familiares = (apellido1 == apellido2);

  cout << "Persona 1 " << "\n";
  cout << "Nombre: " << nombre1 << "\n";
  cout << "Apellido: " << apellido1 << "\n";
  cout << "Estatura: " << estatura1 << "\n";
  cout << "Nacimiento: " << nacimiento1 << "\n";
  cout << "Edad: " << edad1 << "\n\n";

  cout << "Persona 2 " << "\n";
  cout << "Nombre: " << nombre2 << "\n";
  cout << "Apellido: " << apellido2 << "\n";
  cout << "Estatura: " << estatura2 << "\n";
  cout << "Nacimiento: " << nacimiento2 << "\n";
  cout << "Edad: " << edad2 << "\n\n";

  cout << "Persona 1 es mayor que persona 2? " << mayor << "\n";
  cout << "Son familiares? " << familiares << "\n";

  return 0;
}