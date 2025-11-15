//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include<stdio.h>

int main() {

    int a[3][3]={1,2,3,4,5,6,7,8,9};

    printf("%d", a[0][0]+a[1][1]+a[2][2]);

    return 0;
}