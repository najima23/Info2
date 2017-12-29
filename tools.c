//
// Created by Najima Jaadari on 25.12.17.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "teams.h"
#include "tools.h"
#include "menu.h"
#include "datastructure.h"

#ifdef _WIN32
  #define CLEAR "cls"
#else
  #define CLEAR "clear"
#endif

/********************************************************
 * function:      clearBuffer
 * ------------------------------------------------------
 *  descriptin:   reset the input buffer till '\n'
 *  scope:        global
 *******************************************************/

void clearBuffer(void)
{
  char dummy;
  do
  {
    scanf("%c", &dummy);

  } while (dummy != '\n');
}

/********************************************************
 * function:         clearScreen
 * ------------------------------------------------------
 *  description:     clears terminal screen
 *  scope:           global
 *******************************************************/

void clearScreen(void)
{
  system(CLEAR);
}

/********************************************************
 * function:         askYesOrNo
 * ------------------------------------------------------
 *  description:     ask if the user wants to use useless
 *  scope:           global
 *  parameter:       char *text
 *  retrun:          int      *yes == 1 , no == 0
 *******************************************************/

int askYesOrNo(char *text)
{
  char akward;

  do
  {

    printf("\n");
    printf("%s", text);
    scanf("%c", &akward);
    if (akward != '\n') clearBuffer();


    if ((akward == 'j') || (akward == 'J') || (akward == 'n') || (akward == 'N'))
      return ((akward == 'j') || (akward == 'J')) ? 1 : 0;


    printf("Ups, da lief etwas schief!\nBitte nur 'j' oder 'n' eingeben!");
  } while (1);
}

/********************************************************
 * function:         waitForEnter
 * ------------------------------------------------------
 *  description:     Prompt for operation the enter key
 *  scope:           global
 *  parameter:       -
 *  return:          void
 *******************************************************/

void waitForEnter()
{
  printf("Bitte Eingabetaste druecken. \n");
  clearBuffer();
}

/********************************************************
 * function:         printLine
 * ------------------------------------------------------
 *  description:     Returns a character in the desired Number off
 *  scope:           global
 *  parameter:       char c , int count
 *  return:          void
 *******************************************************/

void printLine(char c, int count)
{
  while (count != 0)
  {
    printf("%c", c);
    count--;
  }
  printf("\n");
}
