//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>

int main () {

    char a[]="programming";
    int count=0;
    char c;

    printf("enter character: ");
    scanf("%c", &c);

    for(int i=0; a[i] != '\0'; i++){
        if(a[i]== c){
            count++;
        }
    }
    printf("count=%d", count);
    return 0;
}