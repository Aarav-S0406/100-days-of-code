//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>

int main () {
    int a[2][2]={1,2,3,4};

    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}