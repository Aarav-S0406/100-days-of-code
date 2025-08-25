//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
#include<math.h>

int main () {

    int p=1000;
    int r=5;
    int t=2;

    int P=5000;
    int R=7;
    int T=3;

    printf("simple interest: %d\n", (p*r*t)/100);
    printf("compound interest: %f\n", p*pow((1+(r/100)), t));

    printf("simple interest: %d\n", (P*R*T)/100);
    printf("compound interest: %f\n", P*pow((1+(R/100)), T));


    return 0;

}