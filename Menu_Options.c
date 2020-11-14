 /* Author: Nathan Fan, Sifat Jamaly */
 /* Student number: 040989678 */
 /* CST 8234 C Language */
 /* Lab section 022 */
 /* Assignment 1  */
 /* Part A */
 /* Due: 11/13/2020 */
 /* Submitted: 11/13/2020 */
 /* Professor: Natalie Gluzman */
 /* This file provides functions for menu options 1-4 as well as printing the menu  */
 /**********************************/

#include <stdbool.h>
#include "PhEntry.c"
#include "Area.c"

/* variables */
int i, j, targetCode, searchNumber;
char city[15];
bool found;

/*******************************************************************************************************************************/
/* option1 */
/* This function reads in two numbers and prints student with that phone number*/
/* Input: N/A */
/* Output: void */
/* vr. 1.0 */
/* Nathan Fan */
/*******************************************************************************************************************************/
void option1(){
    /* read in area code */
    printf("\n\nEnter Area Code: ");
    scanf("%d", &targetCode);

    /* read in rest of the number */
    printf("\nEnter 7-digit number: ");
    scanf("%d", &searchNumber);

    found = false;

    /* validate the two numbers */
    if (checkValidityArea(targetCode) && checkValidityNumber(searchNumber)){ 
        printf("\nYour 10-digit phone number was: %d-%d", targetCode, searchNumber);

        for (i = 0; i < 10; i++){
            
            /* found matching phone number */ 
            if (phoneBook[i].areaCode == targetCode && phoneBook[i].phoneNumber == searchNumber){
                found = true;

                for (j = 0; j < 5; j++){
                    /* find city with that area code */
                    if (areaBook[j].areaCode == targetCode){ strcpy(city, areaBook[j].areaName); }
                }
                printf("\nPhone number: %d-%d belongs to Student %s, %s and the number is from %s", targetCode, searchNumber, phoneBook[i].lastName, phoneBook[i].firstName, city);
                break;
            }
        }
        /* no matching students */
        if (!found){
            printf("The phone number %d-%d was not found in the phone book", targetCode, searchNumber);
        }
    }
    /* two numbers were not validated */
    else { printf("\nOne of your inputs, area code or office central number, is incorrect"); }
}

/*******************************************************************************************************************************/
/* option2 */
/* This function reads in area code and prints students with that are code */
/* Input: N/A */
/* Output: void */
/* vr. 1.0 */
/* Nathan Fan */
/*******************************************************************************************************************************/
void option2(){
    /* read in area code */
    printf("\n\nEnter the area code: ");
    scanf("%d", &targetCode);

    found = false;

    /* validate area code */
    if (checkValidityArea(targetCode)){
        for (i = 0; i < 10; i++){
            
            /* found matching area code */
            if (phoneBook[i].areaCode == targetCode){
                found = true;
                
                for (j = 0; j < 5; j++){
                    /* find matching city */
                    if (areaBook[j].areaCode == targetCode){ strcpy(city, areaBook[j].areaName); }
                }

                /* print student(s) with that area code */
                printf("\nPhone number: %d-%d belongs to Student %s, %s and the number is from %s", targetCode, phoneBook[i].phoneNumber, phoneBook[i].lastName, phoneBook[i].firstName, city);
            }
        }

        /* not found */
        if (!found){
            printf("The phone number(s) with area code %d was not found in the phone book", targetCode);
        }    
    }

    /* invalid area code */
    else {printf("\nInput area code is incorrect"); }
}

/*******************************************************************************************************************************/
/* option3 */
/* This function reads in last name and prints the student info with that last name*/
/* Input: N/A */
/* Output: void */
/* vr. 1.0 */
/* Nathan Fan */
/*******************************************************************************************************************************/
void option3(){
    char lastName[20]; 
    found = false;

    /* read in last name */
    printf("\nEnter the last name of the student: ");
    scanf("%s", &lastName);

    for (i = 0; i < 10; i++){

        /* matching string */
        if (!strcmp(phoneBook[i].lastName, lastName)){
            found = true;

            /* find matching city */
            for (j = 0; j < 5; j++){
                if (areaBook[j].areaCode == phoneBook[i].areaCode) { strcpy(city, areaBook[j].areaName);}
            }
            printf("Student with last name %s has first name %s, phone number %d-%d, and lives in %s", lastName, phoneBook[i].firstName, phoneBook[i].areaCode, phoneBook[i].phoneNumber, city);
            break;
        }
    }
    /* no last name in phone book */
    if (!found){
        printf("Student with last name %s is not present in the phone book", lastName);
    }
}

/*******************************************************************************************************************************/
/* option4 */
/* This function prints all the area code information*/
/* Input: N/A */
/* Output: void */
/* vr. 1.0 */
/* Nathan Fan */
/*******************************************************************************************************************************/
void option4(){
    for (i = 0; i < 5; i++){
        printf("\nArea code %d is associated with %s", areaBook[i].areaCode, areaBook[i].areaName);
    }
}

/*******************************************************************************************************************************/
/* printMenu */
/* This function prints the menu options/
/* Input: N/A */
/* Output: void */
/* vr. 1.0 */
/* Nathan Fan */
/*******************************************************************************************************************************/
void printMenu(){
    printf("\n\nChoose one of the five following options: ");
    printf("\nPress [1] to get information based on phone number:");
    printf("\nPress [2] to get information based on Area Code:");
    printf("\nPress [3] to get information based on Last Name:");
    printf("\nPress [4] to print all area-code information:");
    printf("\nPress [q] to quit:\n");
}