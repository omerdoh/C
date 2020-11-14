 /* Nathan Fan, Sifat Jamaly */
 /* 040989678 */
 /* Assignment 1*/
 /* CST 8234 C Language */
 /* Lab section 022 */
 /* Natalize Gluzman */
 /* Due: 11/13/2020 */
 /* Submitted: 11/13/2020 */
 /* Includes: PartA.c, Area.c, PhEntry.c, check_validity.c, check_validity.h, Makefile, Menu_Options.c, Menu_Options.h */
/**************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "check_validity.h"
#include "Menu_Options.h"

/*******************************************************************************************************************************/
/* main */
/* This function allows the user to search a phone book through various methods*/
/* Input: N/A */
/* Output: 0 for successful exit */
/* vr. 1.0 */
/* Nathan Fan */
/*******************************************************************************************************************************/

int main(){
    char userChoice;
    do { 
        printMenu();  
        
        /* read user input */
        userChoice = getchar();

        /* flush input variable to remove newline character */
        while (userChoice == '\n' || userChoice == EOF){
            userChoice = getchar();        
        }
        printf("You pressed: %c", userChoice);
                    
        switch (userChoice){
            /* search by phone number */
            case '1': ;
                option1();
                break;

            /* search by area code */
            case '2':
                option2();
                break;
            
            /* search by last name */
            case '3': ;
               option3();
               break;

            /* print all area code info */
            case '4':
                option4();
                break;

            /* user quits */
            case 'q':
                printf("\nGoodbye\n");
                break;
            
            /* incorrect input */
            default:
                printf("\nPlease choose one of the appropriate menu options");
        }

    } while (userChoice != 'q');

    return 0;
}

