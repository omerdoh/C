 /* Author: Nathan Fan, Sifat Jamaly */
 /* Student number: 040989678 */
 /* CST 8234 C Language */
 /* Lab section 022 */
 /* Assignment 1  */
 /* Part A */
 /* Due: 11/13/2020 */
 /* Submitted: 11/13/2020 */
 /* Professor: Natalie Gluzman */
 /* This file provides the functions for checking integers  */
 /**********************************/

/*******************************************************************************************************************************/
/* checkValidityArea */
/* This function determines if the area code is valid*/
/* Input: int area */
/* Output: 0 for invalid, 1 for valid */
/* vr. 1.0 */
/* Nathan Fan */
/*******************************************************************************************************************************/
int checkValidityArea(int area){
     if (firstDigit(area) < 2 || numDigits(area) != 3 ){
        return 0;
    }
    else return 1;
}

/*******************************************************************************************************************************/
/* checkValidityNumber */
/* This function determines if the rest of the phone number is valid*/
/* Input: int number */
/* Output: 0 for invalid, 1 for valid */
/* vr. 1.0 */
/* Nathan Fan */
/*******************************************************************************************************************************/
int checkValidityNumber(int number){
     if (firstDigit(number) <2 || numDigits(number) != 7 ){
        return 0;
    }
    else return 1;
}

/*******************************************************************************************************************************/
/* numDigits */
/* This function determines the number of digits*/
/* Input: int num */
/* Output: number of digits */
/* vr. 1.0 */
/* Nathan Fan */
/*******************************************************************************************************************************/
int numDigits(int num){
    int digits = 0;

    /* find number of digits by dividing it by 10 until it reaches 0 */
    while (num != 0){
        num /= 10;
        digits++;
    }
    return digits;
}

/*******************************************************************************************************************************/
/* firstDigit */
/* This function determines the first digit*/
/* Input: int num */
/* Output: first digit of num */
/* vr. 1.0 */
/* Nathan Fan */
/*******************************************************************************************************************************/
int firstDigit(int num){
    while (num >= 10) {num /= 10 ;}
    return num;
}