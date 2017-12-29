//
// Created by Najima Jaadari on 28.12.17.
//

#include <stdio.h>
#include <string.h>
#include "menu.h"
#include "tools.h"


int getMenu(char *titel, char *menuItem[], int numberOfItems)
{
  int input = 0, i;

  do
  {
    clearScreen();

    printf("%s\n", titel);
    for (i = 0 ; i < numberOfItems ; i++) {
      printf("%02d. %s\n", i+1, *(menuItem+i) );
    }
    printf("\nIhre Wahl: ");
    scanf("%d", &input);
    clearBuffer();

  } while (input < 1 || input > numberOfItems);

  return input;
}
