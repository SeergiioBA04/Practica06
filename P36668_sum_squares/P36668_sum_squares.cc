/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P36668_Squares
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Write a program that reads a natural number n, and prints the result of the following sum
* @see https://jutge.org/problems/P36668_en/
*/

#include<iostream>

int main() {
  long long number{0};
  std::cin >> number;
  long long suma = (number*(number+1)*((2*number)+1))/6;
  std::cout << suma << std::endl;
}
