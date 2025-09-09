//Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/

#include<stdio.h>

int main () {
    int a;
    int i;
    printf("enter number: ");
    scanf("%d", &a);

    for (i=0; i<=a; i++) {
        printf("%d\n", i);
    }

    return 0;
}