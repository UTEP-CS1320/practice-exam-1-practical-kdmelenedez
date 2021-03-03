/*
*   PRACTICE EXAM #1: PRACTICAL PART
*   Filename: main.c
*   This file allows a user to run any of the 3 problems for Practical Exam #1
*   Last modified by: Angel F. Garcia (2/19/2021)
*/
#include <stdio.h>
#include <string.h>

int main(void) {
  long x = 10;

  printf("%ld", x);

  int opt;
  printf("Enter 1 to test P1, 2 to test P2, 3 to test P3: ");
  scanf("%d", &opt);
  
  if(opt == 1) {
    
    /***************************
     *  Problem 1: Last Digits
     ***************************/
    
    // TODO: Fix the code below.
    int x, y;
    
    scanf("%d %d", &x, &y);

    x = x / 10;
    y = y / 10;

    if(x == y) {
      printf("TRUE");
    }
    else{
      printf("FALSE");
    }
    
    /* Problem 1 End */
  } else if(opt == 2) {
    
    /***************************
     *  Problem 2: Lotto
     ***************************/
    char winner[5] = "7239";
    char ticket[5];

    scanf(" %s", ticket);
    
    if (strcmp (ticket, "7239") == 0){
        printf ("1st prize");
    }
    else if (strcmp (ticket, "0239") >= 0){
        printf ("2nd prize");
    }
    else if (strcmp (ticket, "0039") <= 0){
        printf ("3rd prize");
    }
    else{
      printf ("No Prize! Better luck next time!\n");
    }
    
    /* Problem 2 End */
  } else if(opt == 3) {
    
    /***************************
     *  Problem 3: Hex2Dec
     ***************************/
    char hex_in[5];
    scanf("%s", hex_in);

    //TODO: Your P3 code goes here
    
    /* Problem 3 End */
  }
}
