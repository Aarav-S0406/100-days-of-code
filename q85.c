//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>

int main() {

    char a[]="abcd";
    int i=0;
    int count=0;

    while(a[i] != 0){
        count++;
        i++;
    }

    for(int i=count; i>=0; i--){
        printf("%c", a[i]);
    }
    return 0;
}