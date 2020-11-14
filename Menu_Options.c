#include <stdbool.h>
#include "PhEntry.c"
#include "Area.c"

int i, j, targetCode, searchNumber;
char city[15];
bool found;

void option1(){
    printf("\n\nEnter Area Code: ");
    scanf("%d", &targetCode);

    printf("\nEnter 7-digit number: ");
    scanf("%d", &searchNumber);

    found = false;
    if (checkValidityArea(targetCode) && checkValidityNumber(searchNumber)){ 
        printf("\nYour 10-digit phone number was: %d-%d", targetCode, searchNumber);

        for (i = 0; i < 10; i++){
            if (phoneBook[i].areaCode == targetCode && phoneBook[i].phoneNumber == searchNumber){
                found = true;
                for (j = 0; j < 5; j++){
                    if (areaBook[j].areaCode == targetCode){ strcpy(city, areaBook[j].areaName); }
                }
                printf("\nPhone number: %d-%d belongs to Student %s, %s and the number is from %s", targetCode, searchNumber, phoneBook[i].lastName, phoneBook[i].firstName, city);
                break;
            }
        }
        if (!found){
            printf("The phone number %d-%d was not found in the phone book", targetCode, searchNumber);
        }
    }
    else { printf("\nOne of your inputs, area code or office central number, is incorrect"); }
}

void option2(){
    printf("\n\nEnter the area code: ");
    scanf("%d", &targetCode);

    found = false;

    if (checkValidityArea(targetCode)){
        for (i = 0; i < 10; i++){
            if (phoneBook[i].areaCode == targetCode){
                found = true;
                for (j = 0; j < 5; j++){
                    if (areaBook[j].areaCode == targetCode){ strcpy(city, areaBook[j].areaName); }
                }
                printf("\nPhone number: %d-%d belongs to Student %s, %s and the number is from %s", targetCode, phoneBook[i].phoneNumber, phoneBook[i].lastName, phoneBook[i].firstName, city);
            }
        }
        if (!found){
            printf("The phone number(s) with area code %d was not found in the phone book", targetCode);
        }    
    }
    else {printf("\nInput area code is incorrect"); }
}

void option3(){
    char lastName[20]; 
    printf("\nEnter the last name of the student: ");
    scanf("%s", &lastName);

    found = false;
    for (i = 0; i < 10; i++){
        if (!strcmp(phoneBook[i].lastName, lastName)){
            found = true;
                        
            for (j = 0; j < 5; j++){
                if (areaBook[j].areaCode == phoneBook[i].areaCode) { strcpy(city, areaBook[j].areaName);}
            }
            printf("Student with last name %s has first name %s, phone number %d-%d, and lives in %s", lastName, phoneBook[i].firstName, phoneBook[i].areaCode, phoneBook[i].phoneNumber, city);
            break;
        }
    }
    if (!found){
        printf("Student with last name %s is not present in the phone book", lastName);
    }
}

void option4(){
    for (i = 0; i < 5; i++){
        printf("\nArea code %d is associated with %s", areaBook[i].areaCode, areaBook[i].areaName);
    }
}

void printMenu(){
    printf("\n\nChoose one of the five following options: ");
    printf("\nPress [1] to get information based on phone number:");
    printf("\nPress [2] to get information based on Area Code:");
    printf("\nPress [3] to get information based on Last Name:");
    printf("\nPress [4] to print all area-code information:");
    printf("\nPress [q] to quit:\n");
}