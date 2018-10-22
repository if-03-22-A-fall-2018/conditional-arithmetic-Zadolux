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

  do {
    printf("Enter your choice: ");
    scanf("%d", &input);
  } while(!(input >= 1 && input <= 2));

  return input;
}

// Reads the range
int readRange()
{
  int range = 0;

  do {
    printf("Select a number in the range (1-100): ");
    scanf("%d", &range);
  } while(!(range >= 1 && range <= 100));

  return range;
}

int main(int argc, char const *argv[]) {
  showMenu();
  int input = getOperationInput();
  int range = readRange();
}
