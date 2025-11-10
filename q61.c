//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include<Stdio.h>

int main () {

    int a[]={1,2,3,4,5};
    int b;

    printf("enter number: ");
    scanf("%d", &b);

    for(int i=0;i<=4; i++) {
        if(a[i]==b) {
            printf("found at index %d", i);
        }
    }
    return 0;
}