//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include<stdio.h>

int main () {

    char n;
    printf("enter character: ");
    scanf("%c", &n);

    if (n== 'A' || n== 'E'|| n== 'I' || n== 'O' || n== 'U' || n== 'a' || n== 'e'|| n== 'i' || n== 'o' || n== 'u') {
        printf("vowel");
    }
    else {
        printf("consonant");
    }

    return 0;
}