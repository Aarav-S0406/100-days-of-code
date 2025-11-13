//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include<stdio.h>

int main () {
    int a[]={1,2,3,4,5};
    int b[3];

    for (int i=0; i<=1; i++){
        b[i]=a[i];
    }
    for (int i=2; i<=4; i++){
        b[i]=a[i+1];
    }
    for (int i=0; i<=3; i++){
        printf("%d\n", b[i]);
    }
    return 0;
}