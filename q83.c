//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>

int main() {
    char a[]="hello";
    int vowel=0;
    int consonant=0;
    int i=0;

    while(a[i] != '\0'){
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            vowel++;
        }
        else{
            consonant++;
        }
        i++;
    }
    printf("%d %d", vowel, consonant);
    return 0;
}