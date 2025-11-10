//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>

int main () {

    int a[]={2,9,1,4,7};
    int b[]={10,10,10};

    int max= a[0];
    int min= a[0];

    for(int i=0; i<=4;i++){
        if ( a[i]>max) {
            max= a[i];
        }
        if ( a[i]<min ) {
            min= a[i];
        }

    }
    printf("%d\n", max);
    printf("%d\n", min);

    return 0;

}