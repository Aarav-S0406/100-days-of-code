//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>

int main () {
    int a[]={1,2,3};
    int b[]={4,5};
    int c[5];

        for(int n=0; n<=2;n++) {
            c[n]=a[n];
        }
        for(int n=0;n<=1;n++) {
            c[n+3]=b[n];
        }
    for (int i=0;i<=4;i++){
    printf("%d\n", c[i]);
    }

    return 0;
}