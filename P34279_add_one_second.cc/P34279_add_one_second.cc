/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P34279_Squares
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 8 2022
* @brief Write a program that adds one second to a clock time, given its hours, minutes and seconds. 
* https://jutge.org/problems/P34279_en/
*/



#include<iostream>

int main() {
  int horas, minutos, segundos;
  std::cin >> horas >> minutos >> segundos;
  segundos += 1;
  if (segundos == 60) {
    segundos = 0;
    minutos +=1;
  }
  if (minutos == 60) {
    minutos = 0;
    horas +=1;
  }
  if (horas == 24) {
    horas = 0;
  }
  if (horas < 10) {
    std::cout << 0 << horas << ":";
  }
  else {
    std::cout << horas << ":";
  }
  if (minutos < 10) {
    std::cout << 0 << minutos << ":";
  }
  else {
  std::cout << minutos << ":";
  }
  if (segundos < 10) {
    std::cout << 0 << segundos << std::endl;	  
  }
  else {
    std::cout << segundos << std::endl;
    return 0;
  }
}
