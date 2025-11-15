//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include<stdio.h>

int main() {

    int a[3][3]={1,2,3,4,5,6,7,8,1};
    int b[3][3]={1,2,3,4,5,6,7,8,9};

    if(a[0][0]==a[1][1] || a[1][1]==a[2][2] || a[0][0]==a[2][2]){
        printf("false\n");
    }
    else {
        printf("true\n");
    }
    if(b[0][0]==b[1][1] || b[1][1]==b[2][2] || b[0][0]==b[2][2]){
        printf("false\n");
    }
    else {
        printf("true\n");
    }
    return 0;
}