//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include<stdio.h>

int main () {

    int a[2][3]={1,2,3,4,5,6};
    int b[3][2];

    for(int i=0; i<=2; i++){
        for(int j=0; j<=1; j++){
            b[i][j]=a[j][i];
        }
    }
    for(int i=0; i<=2; i++){
        for(int j=0; j<=1; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}