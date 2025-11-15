//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2

1 2
3 4

2 2

5 6
7 8
Output 1:
6 8
10 12

*/
#include<stdio.h>

int main () {

    int a[2][2]={1,2,3,4};
    int b[2][2]={5,6,7,8};
    int c[2][2];

    printf("matrix a\n");
    for(int i=0; i<=1; i++) {
        for(int j=0; j<=1; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("matrix b\n");
    for(int i=0; i<=1; i++) {
        for(int j=0; j<=1; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("sum of matrices\n");
    for(int i=0; i<=1; i++) {
        for(int j=0; j<=1; j++){
            printf("%d\t", b[i][j]+a[i][j]);
        }
        printf("\n");
    }    
    return 0;
}