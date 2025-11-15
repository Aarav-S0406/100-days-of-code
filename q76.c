//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include<stdio.h>

int main() {

    int a[2][2]={1,2,2,1};
    int b[2][2]={1,0,2,1};

    if(a[0][0]==a[1][1] && a[0][1]==a[1][0]){
        printf("Symmetric\n");
    }
    else {
        printf("not symmetric\n");
    }
    if(b[0][0]==b[1][1] && b[0][1]==b[1][0]){
        printf("Symmetric\n");
    }
    else {
        printf("not symmetric\n");
    }
    return 0;
}