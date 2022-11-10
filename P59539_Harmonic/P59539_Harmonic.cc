/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P34279
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 8 2022
* @brief Write a program that reads a number n and prints the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n. 
* https://jutge.org/problems/P34279_en/
*/

#include <iostream>
#include <iomanip>

int main() {
  unsigned int numero{0};
  double suma{0.0};
  std::cin >> numero;
  for(double i = 1; i <= numero; i++) {
    suma += 1.0/i;
  }
  std::cout << std::fixed << std::setprecision(4) << suma << std::endl;

  return 0;
}
