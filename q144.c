//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include<stdio.h>

struct student{
    char name[50];
    int roll;
    int marks;
};

void func(struct student s) {
    printf("%s\n", s.name);
    printf("%d\n", s.roll);
    printf("%d\n", s.marks);
}
int main () {
    struct student s1;

    printf("Name: ");
    scanf("%s", &s1.name);
    printf("Roll Number: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%d", &s1.marks);

    func(s1);
 return 0;
}