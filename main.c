#include <stdio.h>
#include <string.h>
#include "teams.h"

#include "tools.h"
#include "menu.h"

#include "datastructure.h"

int main()
{
  /*
     TDate newDate1;
     TDate newDate2;
     TPlayer newPlayer;
     TPlayer newPlayer2;
     TTeam newTeam;

     TDate *PNewDate;

     PNewDate = &newDate1;

     newDate1.Year =  2017;
     newDate1.Month =  1;
     newDate1.Day =  2;

     newDate2.Year =  1989;
     newDate2.Month =  9;
     newDate2.Day =  19;

     newPlayer.Name= "Hicham";
     newPlayer.Birthday= PNewDate;
     newPlayer.Number= 11;
     newPlayer.Goals= 2;

     newPlayer2.Name= "Hicham";
     newPlayer2.Birthday= PNewDate;
     newPlayer2.Number= 11;
     newPlayer2.Goals= 2;

     newTeam.Name = "Hungry Bitches";
     newTeam.Coach = "Michael";
     newTeam.Size = 21;
     newTeam.Player[0] = newPlayer; 
     newTeam.Player[1] = newPlayer2; 

     printf("Das Datum ist: %i, %i, %i", newDate2.Year, newDate2.Month, newDate2.Day);
     printf("Der Player ist: %s, %i, %i %i, %i, %i", newPlayer.Name, newPlayer.Number, newPlayer.Goals, newPlayer.Birthday->Year, newPlayer.Birthday->Month, newPlayer.Birthday->Day);
     printf("Das Team ist: %s, %s, %i %s, %s", newTeam.Name, newTeam.Coach, newTeam.Size, newTeam.Player[0].Name, newTeam.Player[1].Name);
     */
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
