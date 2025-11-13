//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>

int main () {
    int a[]={10,20,30,40};
    int b[4];

    for(int i=0; i<=2;i++) {
        b[i]=a[i];
        if(i==2){
          b[i]=15;
        }
    }
    for(int i=3; i<=5;i++) {
        b[i]=a[i-1];
    }
    for (int i=0; i<=4; i++) {
        printf("%d\n", b[i]);
    }
    return 0;
}