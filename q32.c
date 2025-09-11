//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>

int main() {
    
    int a;
    int rev=0;
    int dig;

    printf("enter number: ");
    scanf("%d", &a);
    int b=a;

    while (a!=0) {
        dig=a%10;
        rev=(rev*10)+dig;
        a=a/10;
    }
    if (b==rev) {
        printf("palindrome number");
    }
    else {
        printf("not palindrome");
    }

    return 0;
}