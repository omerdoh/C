#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PhEntry
{
    int areaCode; 
    int phoneNumber; 
    char lastName[20];
    char firstName[20];
} PhEntry;

typedef struct Area
{
    int areaCode;
    char areaName[20];
} Area;

int main(){
    char userChoice; 
    int searchAreaCode, searchNumber, i, j;
    char city[15];

    PhEntry phoneBook[10] = {
        {613, 4891028, "Jones", "Amy"},
        {416, 3156845, "Li", "Simon"},
        {905, 6546865, "Jamaly", "Sifat"},
        {905, 8475421, "Garret", "Victor"},
        {519, 3268445, "Greil", "Ike"},
        {647, 7984651, "Barbossa", "Claude"},
        {416, 2684984, "Smith", "Catherine"},
        {647, 9461653, "Askell", "Max"},
        {613, 4313849, "Cook", "Elincia"},
        {519, 2135498, "Frelia", "Tana"}
    };

    Area areaBook[5] = {
        {613, "Ottawa"},
        {416, "Toronto"},
        {647, "Toronto"},
        {519, "Windsor"},
        {905, "Niagra Falls"}
    };

    do {    
        printf("Choose one of the five following options");
        printf("Press [1] to get information based on phone number:");
        printf("Press [2] to get information based on Area Code:");
        printf("Press [3] to get information based on Last Name:");
        printf("Press [4] to print all area-code information:");
        printf("Press [q] to quit:\n");

        scanf("%c", &userChoice);
        printf("You pressed: %c", userChoice);

        bool found = false;

        switch (userChoice){
          
            case '1':
                printf("Enter Area Code: ");
                scanf("%d", &targetCode);

                printf("Enter 7-digit number: ");
                scanf("%d", &searchNumber);

                printf("Your 10-digit phone number was: %d-%d", targetCode, searchNumber);

                for (i = 0; i < 10; i++){
                    if (phoneBook[i].areaCode == targetCode && phoneBook[i].phoneNumber == searchNumber){
                        found = true;
                        for (j = 0, j < 5; j++){
                            if (areaBook[j].areaCode == targetCode){ strcpy(city, areaBook[i].areaName); }
                        }
                        printf("Phone number: %d-%d belongs to Student %s, %s and the number is from %s", targetCode, searchNumber, phoneBook[i].lastName, phoneBook[i].firstName, city);
                        break;
                    }
                }
                if (!found){
                    printf("The phone number %d-%d was not found in the phone book", targetCode, searchNumber);
                }
                break;

            case '2':
                printf("Enter the area code: ")
                scanf("%d", &targetCode);

                for (i = 0; i < 10; i++){
                    if (phoneBook[i].areaCode == targetCode){
                        found = true;
                        for (j = 0, j < 5; j++){
                            if (areaBook[j].areaCode == targetCode){ strcpy(city, areaBook[i].areaName); }
                        }
                        printf("Phone number: %d-%d belongs to Student %s, %s and the number is from %s", targetCode, searchNumber, phoneBook[i].lastName, phoneBook[i].firstName, city);
                    }
                }
                if (!found){
                    printf("The phone number(s) with area code %d was not found in the phone book", searchCode);
                }
                break;
            
            case '3': 
                char lastName[20]; 
                printf("Enter the last name of the student: ");
                scanf("%s", &lastName);

                for (int i = 0; i < 10; i++){
                    if (!strcmp(phoneBook[i].lastName, lastName)){
                        found = true;
                        
                        for (j = 0; j < 5; j++){
                            if (areaBook[j].areaCode == phoneBook[i].areaCode) { strcpy(city, areaBook[i].areaName);}
                        }
                        printf("Student with last name %s has first name %s, phone number %d-%d, and lives in %s", lastName, phoneBook[i].firstName, phoneBook[i].areaCode, phoneBook[i].phoneNumber, city);
                        break;
                    }
                }
                if (!found){
                    printf("Student with last name %s is not present in the phone book", lastName);
                }
                break;

            case '4';
                for (i = 0; i < 5; i++){
                    printf("Area code %d is associated with %s", areaBook[i].areaCode, areaBook[i].areaName);
                }
                break;

            case 'q':
                printf("Goodbye");
                break;
            
            default:
                printf("Please choose one of the appropriate menu options");
        }

    } while (userChoice != 'q');

    return 0;
}