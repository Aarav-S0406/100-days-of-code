//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include<stdio.h>

int main () {

    int space=0;
    int digit=0;
    int sp=0;

    char a[]="a b1&2";
    
    for(int  i=0; a[i] != '\0'; i++){
        if(a[i]==' '){
            space++;
        }
        else if(a[i]>='0' && a[i]<='9'){
            digit++;
        }
        else if(a[i]>=32 && a[i]<=47 || a[i]>=58 && a[i]<=64 || a[i]>=91 && a[i]<=96){
            sp++;
        }
    }
    printf("spaces=%d, digits=%d, special characers=%d", space, digit, sp);

    return 0;
}