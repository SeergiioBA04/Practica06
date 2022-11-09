/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  P37500
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Write a program that reads a number n, and prints all numbers between 0 and n.
* @see https://jutge.org/problems/P37500_en/
*/


#include<iostream>

int main() {
  int number{0};
  std::cin >> number;
  for (int i = 0; i <= number; i++) {
    std::cout << i << std::endl;
  }
}

