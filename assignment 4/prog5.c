#include <stdio.h>

/* Function prototype declaration */
void printChar(char ch, int times);

int main() {
    char character;
    int count;

    // Ask user for the character input
    printf("Enter the character to print: ");
    /* The space before %c handles any trailing white spaces or newlines in the input buffer */
    scanf(" %c", &character);

    // Ask user for the repetition count
    printf("Enter how many times to print it: ");
    scanf("%d", &count);

    printf("Output: ");
    /* Call the custom function */
    printChar(character, count);

    return 0;
}

/* 
 * Function: printChar
 * Arguments: char ch (the character), int times (the loop limit)
 * Purpose: Uses a standard 'for' loop to repeat the character
 */
void printChar(char ch, int times) {
    // Input validation: handles negative numbers or zero safely
   

    // Standard 'for' loop that runs exactly 'times' number of times
    for (int i = 1; i <= times; i++) {
        printf("%c", ch);
    }
    
    // Print a newline at the very end to clean up the console output
    printf("\n"); 
}

