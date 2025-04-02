#include <stdio.h>

void main()
{
    int j = 4, reversed_array[5];
    int marks[5] = {10, 20, 30, 40, 60};
    for (int i = 0; i < 5; i++)
    {
        reversed_array[i] = marks[j];
        j--;
        printf("%d\n", reversed_array[i]);
    }
}

// #include <stdio.h>

// void main()
// {
//     int j = 1, rev_index_array, reversed_array[5];
//     int marks[5] = {10, 20, 30, 40, 60};
//     for (int i = 0; i < 5; i++)
//     {
//         // rev_index_array = sizeof(marks[j]);
//         // rev_index_array = sizeof(marks) / sizeof(marks[j]) - 1;
//         // j++;
//         printf("%d\n", marks[rev_index_array]);
//         // reversed_array[i] = marks[rev_index_array];
//         // printf("%d\n", reversed_array[i]);
//     }
// }
