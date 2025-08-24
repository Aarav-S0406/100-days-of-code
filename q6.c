//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include<stdio.h>

int main () {

    int a=3;
    int b=5;
    int c;

    int d=-1;
    int e=1;
    int f;

    c=a;
    a=b;
    b=c;

    f=e;
    e=d;
    d=f;
    

    printf("after swap: %d, %d\n", a,b);
    printf("after swap: %d, %d\n", d,e);

    return 0;
}


