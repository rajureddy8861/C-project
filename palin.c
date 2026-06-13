#include <stdio.h>

void palin () {
    int num, originalNum, remainder, reversedNum = 0;

    // Request input from the user
    printf("\nEnter an integer: \n");
    scanf("%d", &num);

    // Store the original number in a temporary variable
    originalNum = num;

    // Reverse the integer mathematically
    while (num != 0) {
        remainder = num % 10;                  // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Append digit to reversed number
        num /= 10;                             // Remove the last digit
    }

    // Determine if the original and reversed numbers match
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

 //   return 0;
}
