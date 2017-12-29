//
// Created by Najima Jaadari on 25.12.17.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "datastructure.h"


int isLeapYear(int year)
{
    if (year % 400 == 0)
        return 1;
    else if (year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    else
        return 0;
}

int isDateValid(TDate *date)
{

    //check year
    if ((date->Year > 9999) || (date->Year < 0)) return 0;

    //check month
    if ((date->Month > 12) || (date->Month < 0)) return 0;

    //check day
    if ((date->Day > 31) || (date->Day < 0)) return 0;

    if (((date->Month == 4) || (date->Month == 6) || (date->Month == 9) || (date->Month == 11)) &&
        (date->Day > 30))
        return 0;

    if (date->Month == 2)
    {
        if ((date->Day == 28) && (isLeapYear(date->Year))) return 1;
        if (date->Day > 28) return 0;
    }
    return 1;
}
/*
int isTimeValid(TTime *time)
{
    //check hour
    if ((time->Hour > 23) || (time->Hour > 0)) return 0;
    if ((time->Minute > 59) || (time->Minute < 0)) return 0;
    if ((time->Second > 59) || (time->Second < 0)) return 0;
}


int getDateFromString(char *input, TDate *date)
{
    date->Day = atoi(input);


    //get month pointer
    do
    {
        if (*input == '\0') return 0;
        input++;
    } while (*input != '.');
    input++;
    date->Month = atoi(input);

    //get year pinter
    do
    {
        if (*input == '\0') return 0;
        input++;
    } while (*input != '.');
    input++;
    date->Year = atoi(input);

    if (isDateValid(date))
    {
        return 1;
    } else
    {
        return 0;
    }
}


int getTimeFromString(char *input, TTime *time)
{
    time->Hour = atoi(input);


    //get month pointer
    do
    {
        if (*input == '\0') return 0;
        input++;
    } while (*input != ':');
    input++;
    time->Minute = atoi(input);

    //get year pinter
    do
    {
        if (*input == '\0') return 0;
        input++;
    } while (*input != ':');
    input++;
    time->Second = atoi(input);

    if (isTimeValid(time))
    {
        return 1;
    } else
    {
        return 0;
    }
}


*/
