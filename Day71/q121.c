/*
Q121: Write a C program that creates a text file named info.txt in write mode.
The program should take the user's name and age as input, and write them
to the file using fprintf(). After writing, display a message confirming
that the data was successfully saved.

Sample Test Cases:

Input 1:
Name: Rahul, Age: 23

Output 1:
File created successfully! Data written to info.txt
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char name[50];
    int age;

    // Take name and age as input
    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    // Open file in write mode
    file = fopen("info.txt", "w");

    // Check if file was created successfully
    if (file == NULL)
    {
        printf("Error creating file!");
        return 1;
    }

    // Write data to the file
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);

    // Close the file
    fclose(file);

    printf("File created successfully! Data written to info.txt");

    return 0;
}
