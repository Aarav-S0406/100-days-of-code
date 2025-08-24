//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>

int main () {

    int a=7;
    int b=3;

    printf("area is: %f\n", a*a*3.14);
    printf("circumference is: %f\n", 2*a*3.14);

    printf("area is: %f\n", b*b*3.14);
    printf("circumference is: %f\n", 2*b*3.14);

    return 0;
}

