/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P97156
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Write a program that reads two numbers a and b, and prints all numbers between a and b.
* @see https://jutge.org/problems/P97156_en/
*/


#include<iostream>

int main() {
  int number1{0};
  int number2{0};
  std::cin >> number1 >> number2;
  if (number1 > number2) {
    std::cout << std::endl;
    return 0;
  }
  for (int i = number1; i <= number2; i++) {
    std::cout << i;
    if (i == number2) {
      break;
    }
    std::cout << ",";
  }
  std::cout << std::endl;
  
  return 0;
}

