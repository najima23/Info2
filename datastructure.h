//
// Created by Najima Jaadari on 25.12.17.
//

#ifndef INFO2UEBUNG2_DATASTRUCTURE_H
#define INFO2UEBUNG2_DATASTRUCTURE_H

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
    char *Name; //manschschafts Name
    char *coach;
    int size;
    TPlayer Player[MaxPlayer];

} TTeam;

extern int TeamCounter;
extern TTeam Teams[];

#endif //INFO2UEBUNG2_DATASTRUCTURE_H
