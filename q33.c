//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
int main () {

    int a;
    int i;
    printf ("enter a: ");
    scanf ("%d", &a);
    int fac=0;
    for(i=1; i<=a; i++) {
        if (a%i==0) {
            fac++;
        }
    }
    if (fac<=2) {
        printf("prime");
    }
    else {
        printf("composite");
    }
 return 0;
}