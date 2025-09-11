//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>

int main () {

    int a;
    int i;
    int fac=1;
    printf("enter number: ");
    scanf("%d", &a);

    for (i=1; i<=a; i++) {
        fac=fac*i;
    }
    printf("factorial= %d", fac);

    return 0;

}
