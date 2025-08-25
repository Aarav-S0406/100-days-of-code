//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include<stdio.h>

int main () {

    int a=3661;
    int b=7322;

    printf("%d, %d, %d\n", a/3600, a/61, 1);
    printf("%d, %d, %d\n", b/3600, b/61, 2);

    return 0;

}