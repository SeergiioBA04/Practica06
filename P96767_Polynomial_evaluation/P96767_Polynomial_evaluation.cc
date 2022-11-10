/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P96767_Polynomial_evaluation
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 8 2022
* @brief  Write a program that reads a number x and a polynomial p(z) = c0 z0 +           c1 z1 + ⋯ + cn zn, and computes p(x)
* https://jutge.org/problems/P96767_en/
*/


#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

int main() {
  double multiplicador{0}, numero{0}, total{0.0};
  int coeficiente{0};
  std::cin >> numero;
  while (std::cin >> multiplicador) {
    total = (multiplicador * pow(numero, coeficiente));
  }
  std::cout << std::fixed << std::setprecision(4) << total << std::endl;
}
