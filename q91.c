//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include<stdio.h>

int main () {

    char a[]="education";

    for(int i=0; a[i] != '\0'; i++){
        if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u'){
            a[i]=' ';
        }
    }
    printf("%s", a);
}