/*
Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92

Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that returns the top student's structure
struct Student findTopper(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    struct Student s[100];
    struct Student topper;
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    topper = findTopper(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           topper.name, topper.roll, topper.marks);

    return 0;
}
