//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3

1 2 3
4 5 6

3 2

7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include<stdio.h>

int main () {

    int a[2][3]={1,2,3,4,5,6};
    int b[3][2]={7,8,9,10,11,12};
    int c[2][2];

    printf("matrix a:\n");
    for(int i=0; i<=1; i++){
      for(int j=0;j<=2; j++){
        printf("%d", a[i][j]);
        printf("\t");
       }
        printf("\n");
    }
    printf("matrix b:\n");
    for(int i=0; i<=2; i++){
      for(int j=0;j<=1; j++){
        printf("%d", b[i][j]);
        printf("\t");
        }
        printf("\n");
    }
    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
            c[i][j]=0;
            for (int k=0; k<=2; k++){
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    printf("product of matrices:\n");
    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
            printf("%d", c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
