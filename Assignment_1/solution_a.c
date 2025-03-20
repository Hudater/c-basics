#include <stdio.h>

int main()
{
    // Q1: input x amount of numbers
    // 5 nums in the question but just trying to make sure program works with any amount of nums
    float input_array[5];
    float avg_num, sum_array = 0;
    float smallest_num, largest_num;
    // getting length of array
    //  https://www.geeksforgeeks.org/length-of-array-in-c/
    // an alternative method would be to ask user for the length of array that way the program would work for any amount of nums
    int length_array = sizeof(input_array) / sizeof(input_array[0]);
    int i, no_match = 0;

    for (i = 0; i < length_array; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &input_array[i]);
    }

    // Q2: avg of array nums (Average = Sum of Values/Number of Values)

    // finding sum of values in array
    for (i = 0; i < length_array; i++)
    {
        sum_array += input_array[i];
    }
    // printf("%.2f:", sum_array);
    avg_num = sum_array / length_array;
    printf("\nAverage of given numbers is: %.2f\n", avg_num);

    // Q3: Finding smallest and largest num
    smallest_num = largest_num = input_array[0];
    for (i = 1; i < length_array; i++)
    {
        if (input_array[i] > largest_num){
            largest_num = input_array[i];
        } else if (input_array[i] < smallest_num){
            smallest_num = input_array[i];
        } else {
            no_match++;
        }
    }
    // we can tell if all entries are duplicate if no_match counter is equal to (iteration counts - 1)
    // (iteration counts - 1) because we already assigned 0th element to smallest and largest num
    if (no_match==i-1)
    {
        printf("\nAll input numbers (%d) are equal\n", length_array);
    } else{
        printf("\nThe largest number is: %.2f\t and smallest number is: %.2f\n", largest_num, smallest_num);
        // this part doesn't work as intended if there are 4 duplicate entries of total 2 nums like {1,1,2,2,3}
        printf("Total number of duplicate entries is: %d\n", no_match+1);
    }
    return 0;
}