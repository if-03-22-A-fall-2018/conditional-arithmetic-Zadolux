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

int getOperationInput()
{
  int input;

  printf("Enter your choice: ");
  scanf("%d", &input);

  if(input > -2 && input < 5)
  {
    return input;
  }
  else
  {
    return -1;
  }
}

// Reads the two needed numbers
void readNumbers(double* number1, double* number2)
{
  printf("Select a number in the range (1-100): ");
  scanf("%lf", number1);
  printf("Select a number in the range (1-100): ");
  scanf("%lf", number2);
}

int main(int argc, char const *argv[]) {
  showMenu();
  int input = getOperationInput();

  double number1;
  double number2;
  readNumbers(&number1, &number2);
}
