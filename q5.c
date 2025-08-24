//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>

int main () {

    int a=0;
    int b=100;

    printf("conversion is: %f\n", (1.8*a)+32);
    printf("conversion is: %f\n", (1.8*b)+32);

    return 0;

}