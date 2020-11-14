
int checkValidityArea(int area){
     if (firstDigit(area) < 2 || numDigits(area) != 3 ){
        return 0;
    }
    else return 1;
}

int checkValidityNumber(int number){
     if (firstDigit(number) <2 || numDigits(number) != 7 ){
        return 0;
    }
    else return 1;
}
int numDigits(int num){
    int digits = 0;

    /* find number of digits by dividing it by 10 until it reaches 0 */
    while (num != 0){
        num /= 10;
        digits++;
    }
    return digits;
}

int firstDigit(int num){
    while (num >= 10) {num /= 10 ;}
    return num;
}