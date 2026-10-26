/*
Q118: Write a program to take an input array of size n.
The array should contain all the integers between 0 to n except for one.
Print that missing number.

Sample Test Cases:

Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2
*/

#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0, actualSum = 0;

    scanf("%d", &n);

    int nums[n];

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        actualSum = actualSum + nums[i];
    }

    // Calculate sum of numbers from 0 to n
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    // Print the missing number
    printf("%d", sum - actualSum);

    return 0;
}
