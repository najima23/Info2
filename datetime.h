//
// Created by Najima Jaadari on 25.12.17.
//

#ifndef INFO2UEBUNG2_DATETIME_H
#define INFO2UEBUNG2_DATETIME_H
#include "datastructure.h"

/***************************************************************************
 *  isLeapYear
 *  check if the year is a leap-year
 *  parameter: year to proof
 *  return   : boolean if leap-year retun 1 else 0
 ***************************************************************************/

int isLeapYear(int year);

/***************************************************************************
 *  isDateValid
 *  check if the date is valid
 *  parameter: date
 *  return   : boolean
 ***************************************************************************/

int isDateValid(TDate *tDate);

/***************************************************************************
 *  isTimeValid
 *  check if the time is valid
 *  parameter: time
 *  return   : boolean
 ***************************************************************************/

int isTimeValid(TTime *time);

/***************************************************************************
 *  getDateFromString
 *  convert string input from user to a valid date and seperate with "."
 *  parameter: char input from user(date) , and date
 *  return   : boolean
 ***************************************************************************/

int getDateFromString(char *input, TDate *date);

/***************************************************************************
 *  getTimeFromString
 *  convert string input from user to a valid time and seperate with ":"
 *  parameter: char input from user(date) , and time
 *  return   : boolean
 ***************************************************************************/
int getTimeFromString(char *input, TTime *time);

#endif //INFO2UEBUNG2_DATETIME_H
