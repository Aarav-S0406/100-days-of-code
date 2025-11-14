//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>

int main () {
    int a[2][3]={1,2,3,4,5,6};
    int b=0;

    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            b=b+a[i][j];
        }
    }
    printf("%d", b);
    return 0;
}