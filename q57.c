//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include<stdio.h>

int main () {

    int a[]= {2,4,6,8};
    int b[]= {1,1,1};
    int n=0;
    int m=0;

    for(int i=0; i<=3; i++) {
        n= n+ a[i];
    }
    for(int j=0; j<=2; j++) {
        m= m + b[j];
    }

    printf("%d\n", n);
    printf("%d\n", m);
    
    return 0;
}