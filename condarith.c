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

#define ADD 1
#define MULTIPLY 2

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
  } while(!(input >= ADD && input <= MULTIPLY));

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

int addRange(int range)
{
  long result = 0;

  for(int i = 3; i <= range; i++)
  {
    int modulo3 = i % 3;
    int modulo5 = i % 5;

    if(modulo3 == 0 || modulo5 == 0)
    {
      result += i;
    }
  }

  return result;
}

int executeOperation(int operation, int range)
{
  int result = 0;

  switch(operation)
  {
    case ADD:
      result = addRange(range);
    break;
    case MULTIPLY:
      printf("Multiply!");
    break;
  }

  return result;
}

unsigned char isOverflow(int range)
{
  if(range > 0)
    return 0;
  else
    return 1;
}

int main(int argc, char const *argv[]) {
  showMenu();
  int operation = getOperationInput();
  int range = readRange();

  int result = executeOperation(operation, range);
}
