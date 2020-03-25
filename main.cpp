#include <stdlib.h>
#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void) {
  
  Matrix my_matrix, inv_matrix;

  zeroes(my_matrix, 3);

  my_matrix.at(0).at(0) = 2; my_matrix.at(0).at(1) = 2; my_matrix.at(0).at(2) = 3;
  my_matrix.at(1).at(0) = 4; my_matrix.at(1).at(1) = 5; my_matrix.at(1).at(2) = 6;
  my_matrix.at(2).at(0) = 7; my_matrix.at(2).at(1) = 8; my_matrix.at(2).at(2) = 9;

  inversa(my_matrix, inv_matrix);

  showMatrix(inv_matrix);

  return 0;

}