//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include<stdio.h>

int main() {

    int a=10;
    int b=20;

    int c=7;
    int d=14;

    b=b-a;
    a=b+a;

    d=d-c;
    c=d+c;

    printf("after swap: %d, %d\n", a,b);
    printf("after swap: %d, %d\n", c,d);

    return 0;
}