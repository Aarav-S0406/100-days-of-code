//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h> 

int main () {
  int n;
  int m;
  int sum;
  int diff;
  int mult;
  int div;
  int choice;

  printf("enter n: ");
  scanf("%d", &n);

  printf("enter m: ");
  scanf("%d", &m);

  printf("MENU\n 1:ADD\n 2: SUB\n 3: MULT\n 4: DIV\n");
  scanf("%d", &choice);  
                         
    switch(choice) {  
                      
      case 1: sum= n+m;  
      printf("sum= %d", n+m);
      break;

      case 2: diff= n-m;
      printf("sub= %d", n-m);
      break;

      case 3: mult=m*n;
      printf("mult= %d", m*n );
      break;

      case 4: div=m/n;
      printf("div= %d", m/n);
      break;
      
      default: printf("invalid choice");
      break;
    }


    return 0;
}