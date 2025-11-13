//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include<stdio.h>

int main () {
    int a[]={1,2,4,5,6};
    int b[5];

    for(int i=0; i<=2;i++) {
        b[i]=a[i];
        if(i==2){
          b[i]=3;
        }
    }
    for(int i=3; i<=5;i++) {
        b[i]=a[i-1];
    }
    for (int i=0; i<=5; i++) {
        printf("%d\n", b[i]);
    }
    return 0;
}