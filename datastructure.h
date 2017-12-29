//
// Created by Najima Jaadari on 25.12.17.
//
#define MaxPlayer 23
#define MAXTEAMS  10

typedef struct
{
  int Year;
  int Month;
  int Day;
} TDate;

typedef struct
{
  char *Name;
  TDate *Birthday;
  int Number;
  int Goals;
} TPlayer;

typedef struct
{
  char *Name;
  char *Coach;
  int Size;
  TPlayer Player[MaxPlayer];
} TTeam;

extern int TeamCounter;
extern TTeam Teams[];
