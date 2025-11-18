//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include<stdio.h>
#include<string.h>

int main () {

    char a[]="racecar";
    int count=0;
    int i=0;

    while(a[i] != '\0'){
        count++;
        i++;
    }
    char b[count+1];
    for(int j=0; j<count; j++){
         b[j] = a[count-1-j];
    }
    b[count]='\0';
    if (strcmp(a, b) == 0){
        printf("palindrome");
    }
    else {
        printf("not palindrome");
    }
    return 0;
}