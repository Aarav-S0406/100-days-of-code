//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>

int main () {
    int a[]={1,2,3,4,5};
    int b[4];

    for (int i=0; i<=1; i++) {
        b[i]=a[i+3];
    }
    for (int i=2; i<=4; i++){
        b[i]=a[i-2];
    }
    for (int i=0; i<=4; i++){
        printf("%d\n", b[i]);
    }
    return 0;
}