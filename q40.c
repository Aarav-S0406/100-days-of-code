//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, digit, position = 0;
    int complement = 0;

    // Input
    printf("Enter a binary number: ");
    scanf("%d", &num);

    // Process each digit
    while (num > 0) {
        digit = num % 10;       // get last digit
        if (digit == 0)
            digit = 1;
        else if (digit == 1)
            digit = 0;
        else {
            printf("Invalid input! Only 0 and 1 allowed.\n");
            return 1; // exit
        }

        // place the flipped digit at the correct position
        complement += digit * (int)pow(10, position);

        num /= 10;      // remove last digit
        position++;     // move to next position
    }

    // Output
    printf("1's complement = %d\n", complement);

    return 0;
}
