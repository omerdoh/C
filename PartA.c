#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "check_validity.h"
#include "Menu_Options.h"

int main(){
    char userChoice; 
    int searchAreaCode, searchNumber, i, j, targetCode;
    char city[15];
  
    do { 
        printMenu();  
        
        userChoice = getchar();
        while (userChoice == '\n' || userChoice == EOF){
            userChoice = getchar();        
        }
        printf("You pressed: %c", userChoice);
                    
        switch (userChoice){
          
            case '1': ;
                option1();
                break;

            case '2':
                option2();
                break;
            
            case '3': ;
               option3();
               break;

            case '4':
                option4();
                break;

            case 'q':
                printf("\nGoodbye\n");
                break;
            
            default:
                printf("\nPlease choose one of the appropriate menu options");
        }

    } while (userChoice != 'q');

    return 0;
}

