//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include<stdio.h>

int main() {

    int a=10;
    int b=2;
    int c=7;
    int d=3;

    printf("sum is: %d\n", a+b);
    printf("product is: %d\n", a*b);
    printf("differance is: %d\n", a-b);
    printf("qoutent is: %d\n", a/b);

    printf("sum is: %d\n", c+d);
    printf("product is: %d\n", c*d);
    printf("differance is: %d\n", c-d);
    printf("qoutent is: %d\n", c/d);

    return 0;
}