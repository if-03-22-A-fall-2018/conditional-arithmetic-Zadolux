/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			Conditional arithmetic
 * Author:	  Wallinger Marc
 * ----------------------------------------------------------
 * Description:
 * Exercises for pointers, loops and overflow detection
 * ----------------------------------------------------------
*/
#include <stdio.h>

#define ADD 1
#define MULTIPLY 2

// Shows the menu
void showMenu()
{
  printf("Choose one of the following operations:\n");
  printf("\tAdd (1)\n");
  printf("\tMultiply (2)\n");
}

// Gets an operation int
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

// Calculates (both add or multiply)
long calcRange(int range, int operation)
{
  long result = 0;

  if(operation == MULTIPLY)
  {
    result = 1;
  }

  for(int i = 3; i <= range; i++)
  {
    int modulo3 = i % 3;
    int modulo5 = i % 5;

    if(modulo3 == 0 || modulo5 == 0)
    {
      if(operation == ADD)
      {
        result += i;
      }
      else
      {
        result *= i;
      }
    }
  }

  return result;
}

// Selects which action to execute
int executeOperation(int operation, int range)
{
  long result = 0;

  switch(operation)
  {
    case ADD:
      result = calcRange(range, ADD);
    break;
    case MULTIPLY:
      result = calcRange(range, MULTIPLY);
    break;
  }

  return result;
}

// Checks if an overflow is going to happen
unsigned int isOverflow(int range, int operation)
{
  if((operation == MULTIPLY && range > 0) || (operation == ADD && range >= 0))
    return 0;
  else
    return 1;
}

int main(int argc, char const *argv[]) {
  showMenu();
  int operation = getOperationInput();
  int range = readRange();

  long result = executeOperation(operation, range);

  if(isOverflow(result, operation) == 0)
  {
    printf("The result is: %ld\n", result);
  }
  else
  {
    printf("Overflow!\n");
  }
}
