/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P97156
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Write a program that reads three numbers, all diferent, and prints their maximum
* @see https://jutge.org/problems/P97156_en/
*/


#include<iostream>

int main() {
  int number1{0};
  int number2{0};
  int number3{0}; 
  std::cin >> number1 >> number2 >> number3;

  if(number1 > number2 && number1 > number3) {
    std::cout << number1 << std::endl;
  }else if(number2 > number1 && number2 > number3) {
    std::cout << number2 << std::endl;
  }else if(number3 > number2 && number3 > number1) {
    std::cout << number3 << std::endl;
  }
}
