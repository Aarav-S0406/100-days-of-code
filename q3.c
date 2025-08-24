//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>

int main() {

    int a=5;
    int b=10;
    int c=3;
    int d=7;

    printf("area is: %d\n", a*b);
    printf("perimeter is: %d\n", 2*(a+b));
    
    printf("area is: %d\n", c*d);
    printf("perimeter is: %d\n", 2*(c+d));
    
    return 0;
 
}    