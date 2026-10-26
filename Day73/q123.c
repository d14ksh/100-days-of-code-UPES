/*
Q123: Read a text file and count the total number of characters,
words, and lines. A word is defined as a sequence of non-space
characters separated by spaces or newlines.

Sample Test Cases:

Input 1:
File: sample.txt
Content:
Hello world
This is C programming

Output 1:
Characters: 31
Words: 5
Lines: 2
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0;

    // Open the file in read mode
    file = fopen("sample.txt", "r");

    // Check if the file exists
    if (file == NULL)
    {
        printf("File not found!");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        // Count lines
        if (ch == '\n')
        {
            lines++;
        }

        // Count words
        if (ch == ' ' || ch == '\n')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    // Add last line if file is not empty
    if (characters > 0)
    {
        lines++;
    }

    // Print results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    // Close the file
    fclose(file);

    return 0;
}
