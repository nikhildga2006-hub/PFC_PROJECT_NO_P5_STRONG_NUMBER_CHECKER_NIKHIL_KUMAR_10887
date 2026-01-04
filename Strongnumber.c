                                         // Project Title
                                       // Strong Number Checker
// Name: NIKHIL KUMAR
// Roll No: RU-25-10887
// Project No: P5
// Language: C
// Tools: VS Code, GitHub

// Concept: Strong Number
// A Strong Number is a number in which the sum of the factorials of its digits is equal to the original number.
// Example


// 145
// → 1! + 4! + 5!
// → 1 + 24 + 120 = 145 
// → Strong Number



// Algorithm (As per your steps)


// Read a number from the user


// Store it as the original number


// Copy it to another variable


// Extract digits using % 10


// Calculate factorial of each digit


// Add all factorial values


// Repeat until all digits are processed


// Compare sum with original number


// If equal → Strong Number


// Print result



                             //  C Program: Strong Number Checker
#include <stdio.h>

int main() {
    int num, originalNum, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;

        // Calculate factorial of digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == originalNum) {
        printf("Strong Number\n");
    } else {
        printf("Not a Strong Number\n");
    }

    return 0;
}
                      ////////////////OUTPUT///////////////////
    // Enter a number=145
    // Strong Number

