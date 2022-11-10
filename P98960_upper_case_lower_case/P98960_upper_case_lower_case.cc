/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P97156
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Write a program that reads a letter and prints it in lowercase if it wa         s uppercase, or prints it in uppercase if it was lowercase. 
* @see https://jutge.org/problems/P97156_en/
*/


#include<iostream>

int main() {
  char letra;
  int letra_en_numero;

  std::cin >> letra;

  letra_en_numero = static_cast<int>(letra);

  if(letra_en_numero < 97) {
    int letra_minuscula = letra_en_numero + 32;
    std::cout << char(letra_minuscula) << std::endl;
  }else if(letra_en_numero >= 97) {
    int letra_mayuscula = letra_en_numero - 32;
    std::cout << char(letra_mayuscula) << std::endl;
  }
}
