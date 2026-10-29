/*
Q127: Write a program that reads text from input.txt, converts all
lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:

Input 1:
Input File (input.txt): Hello World\nC programming

Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char ch;

    // Open input.txt in read mode
    input = fopen("input.txt", "r");

    if (input == NULL) {
        printf("Error: input.txt does not exist!");
        return 0;
    }

    // Open output.txt in write mode
    output = fopen("output.txt", "w");

    if (output == NULL) {
        printf("Error: Cannot create output.txt!");
        fclose(input);
        return 0;
    }

    // Read each character, convert to uppercase and write to output.txt
    while ((ch = fgetc(input)) != EOF) {
        ch = toupper(ch);
        fputc(ch, output);
    }

    // Close both files
    fclose(input);
    fclose(output);

    printf("File converted successfully.");

    return 0;
}
