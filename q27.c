//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include<stdio.h>

int main () {

    int a;
    int i;
    int sum=0;
    printf("enter a: ");
    scanf("%d", &a);

    for (i=1; i<=a; i++) {
        int n=((2*i)-1);
        sum=sum+n;
    }
    printf ("sum= %d", sum);

    return 0;
}