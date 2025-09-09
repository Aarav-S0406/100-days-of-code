//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>

int main () {
    int a;
    int b;
    int c;
    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d", &b);
    printf("enter c:");
    scanf("%d", &c);

    if (a>>b && a>>c) {
        printf("greatest is %d", &a);
    }

   else if (b>>a && b>>c) {
        printf("greatest is %d", &b);
    }

   else if (c>>a && c>>b) {
        printf("greatest is %d", &c);
    }

    else {
        printf("not a valid input");
    }



    return 0;
}