//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include<stdio.h>

int main (){

    char a[]="Hello WOrlD";
    int i=0;

    for(int i=0; a[i] !='\0'; i++){
        if(a[i]>='a' && a[i]<='z'){
            a[i]=a[i]-32;
        }
        else if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]+32;
        }
    }
    printf("%s", a);
    return 0;
}