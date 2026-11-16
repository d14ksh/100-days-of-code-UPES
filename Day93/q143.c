/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88

Output 1:
Topper: Ravi (Marks: 95)
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[100];
    int n, i, topper = 0;

    scanf("%d", &n);

    // Input student details
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    printf("Topper: %s (Marks: %d)",
           s[topper].name, s[topper].marks);

    return 0;
}
