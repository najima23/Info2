#include <stdio.h>
#include <string.h>
#include "teams.h"

#include "tools.h"
#include "menu.h"

#include "datastructure.h"

int main()
{
  int input, checkSave = 0;
  char *menuTitel = "Mannschaften-Verwaltung V0.4";
  char *menuItems[] = {
    "Neue Mannschaften anlegen",
    "Spieler hinzufuegen (no Function)",
    "Spieler loeschen (no Function)",
    "Mannschaft loeschen (no Function)",
    "Suchen (no Function)",
    "Sortieren",
    "Auflisten",
    "Programm beenden"};

  getMenu(menuTitel, menuItems, 8);

  while( (input = getMenu(menuTitel, menuItems, 8)))
  {
    switch(input)
    {
      case 1:
        createTeam();
        break;
      case 2:
        deleteTeam();
        break;
      case 3:
        addPlayer();
        break;
      case 4:
        deletePlayer();
        break;
      case 5:
        searchPlayer();
        break;
      case 6:
        sortTeams();
        break;
      case 7:
        listTeams();
        break;
      case 8: 
        checkSave = 1;
        break;
    }

    if(checkSave == 1)
      return 0;
  }

  return 0;
}
