/*
Q126: Ask the user for a filename. Check if it exists by trying to open
it in read mode. If the file pointer is NULL, print an error message;
otherwise, read and display its content.

Sample Test Cases:

Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    // Take filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File does not exist!");
        return 0;
    }

    printf("File opened successfully.\n");

    // Read and display file content
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}
