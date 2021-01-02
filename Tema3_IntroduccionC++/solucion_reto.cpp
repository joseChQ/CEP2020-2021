#include <iostream>
using namespace std;

int main() {
  string nombre = "Alonso";
  string apellido = "Valdivia";
  float estatura = 1.65;
  int nacimiento = 2000;
  int edad = 2021 - nacimiento;
  bool adulto = (edad >= 18);
  cout << "Persona: " << "\n";
  cout << "Nombre: " << nombre << "\n";
  cout << "Apellido: " << apellido << "\n";
  cout << "Estatura: " << estatura << "\n";
  cout << "Nacimiento: " << nacimiento << "\n";
  cout << "Edad: " << edad << "\n";
  cout << "Es adulto: " << adulto << "\n";

  return 0;
}