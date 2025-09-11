//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include<stdio.h>

int main () {
    int a;
    int dig;
    int rev=0;
    printf("enter a: ");
    scanf("%d", &a);

    while(a!=0) {
        dig= a%10;
        rev=(rev*10)+dig;
        a=a/10;
    }
    printf("reversed number= %d", rev);

    return 0;
}