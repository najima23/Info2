//
// Created by Najima Jaadari on 28.12.17.
//

#include <stdio.h>
#include <string.h>
#include "menu.h"
#include "tools.h"


int getMenu(char *titel, char **menuItem, int numberOfItems)
{
    int input = 0,
            i;

    do
    {
        clearScreen();

        printf("%s\n", titel);
        printLine('=', 10);                     // Ausgabe Menutitel
        printf("\n\n");

        for (i = 0 ; i < numberOfItems ; i++)              // Ausgabe Untermenus
            printf("%02d. %s\n", i+1, *(menuItem+i) );

        printf("\nIhre Wahl: ");                           // Auswahl des Untermenus
        scanf("%d", &input);
        clearBuffer();

    } while (input < 1 || input > numberOfItems);         // Solange keine gueltige Eingabe getaetigt

    return input;
}