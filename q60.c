//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>

int main () {

    int a[]={-1,0,1,2,-5,6};
    int positive=0,negative=0,zero=0;
    
    for(int i=0;i<=5;i++) {
        if ( a[i] == 0) {
            zero++;
        }
        else if (a[i]>0) {
            positive++;
        }
        else {
            negative++;
        }
    }
    printf("positive=%d\n", positive);
    printf("negative=%d\n", negative);
    printf("zero=%d\n", zero);

    return 0;
}
