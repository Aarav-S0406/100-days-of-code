//Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>

int main() {
    int number;
    printf("enter number:");
    scanf("%d",&number);

    if(number<70 && number>60) {
        printf("c\n");
    }

    else if(number>=80 && number<89) {
        printf("b\n");
    
    }
    else if(number>=90 && number<=100){
        printf("a\n");
    }
    else if(number<=50){
        printf("f\n");
    
    }
    else{
    printf("not a valid score");
    }

    return 0;
}