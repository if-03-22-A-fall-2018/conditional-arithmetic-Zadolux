/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 3
 * Title:			Conditional arithmetic
 * Author:	  Wallinger Marc
 * ----------------------------------------------------------
 * Description:
 * Exercises for pointers (call by ref, val, ...)
 * ----------------------------------------------------------
*/
#include <stdio.h>

void showMenu()
{
  printf("Choose one of the following operations:\n");
  printf("\tAdd (1)\n");
  printf("\tMultiply (2)\n");
}

// Reads the two needed numbers
void readNumbers(double* number1, double* number2)
{
  printf("Number 1: ");
  scanf("%lf", number1);
  printf("Number 2: ");
  scanf("%lf", number2);
}

int main(int argc, char const *argv[]) {
  showMenu();
}
