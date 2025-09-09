//Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/

#include<stdio.h>

int main () {
    int a;
    printf("enter number of units: ");
    scanf("%d", &a);

    if (a==50) {
        printf("bill is 250");
    }

    else if(a==150) {
        printf("bill is 950");
    }
    
    else if (a==250) {
        printf("bill is 2200");
    }

    else {
        printf("not a valid input");
    }
    
    return 0;
}