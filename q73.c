//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>

int main () {
    int a[2][3]={1,2,3,4,5,6};
    int b=0;
    int c=0;

    for(int i=0; i<=0; i++) {
        for(int j=0; j<=2; j++){
            b=b+a[i][j];
        }
        
    }
    for(int i=1; i<=1; i++ ) {
        for(int j=0; j<=2; j++){
            c=c+a[i][j];
        }
    }
    printf("%d %d", b, c);
    return 0;
}