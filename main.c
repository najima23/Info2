#include <stdio.h>
#include <string.h>
#include "teams.h"
#include "tools.h"
#include "menu.h"
#include "datastructure.h"

int main()
{

    int input, checkSave = 0;
    char *menuTitel = "Mannschaften-Verwaltung V0.4";       // Menutitel
    char *menuItems[] = {"Neue Mannschaften anlegen",       // Untermenu
                         "Spieler hinzufuegen (no Function)",
                         "Spieler loeschen (no Function)",
                         "Mannschaft loeschen (no Function)",
                         "Suchen (no Function)",
                         "Sortieren",
                         "Auflisten",
                         "Programm beenden"};

    while( (input = getMenu(menuTitel, menuItems, 8))) // Menuauswahl
    {
        switch(input)
        {
            case 1: menuItems[0];         break;
            case 2: menuItems[1];          break;
            case 3: menuItems[2];       break;
            case 4: menuItems[3];         break;
            case 5: menuItems[4];       break;
            case 6: menuItems[5];          break;
            case 7: menuItems[6];          break;
            case 8: checkSave = 1;   break;
        }
        if(checkSave == 1)
            return 0;
    }
    return 0;
}