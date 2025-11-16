//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include<stdio.h>

int main() {
    char a[]="hello";
    int i=0;

    while(a[i] != '\0'){
        printf("%c\n", a[i]);
        i++;
    }
    return 0;
}