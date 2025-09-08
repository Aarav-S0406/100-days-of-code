//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include<stdio.h>

int main () {

    char a;
    printf("enter a character: ");
    scanf("%c", &a);

    if (a>=65 && a<=90) {
        printf("upper case letter");
    }

    else if(a>=97 && a<=122) {
        printf("lower case letter");
    }
    
    else if(a>=32 && a<=47) {
        printf("special character");
    }

    else if(a>=48 && a<=57) {
        printf("digit");
    }
    
    else if(a>=58 && a<=64) {
        printf("special character");
    }

    else {
        printf("not a valid input");
    }

    return 0;

}