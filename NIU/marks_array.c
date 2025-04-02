// #include <stdio.h>

// void main(){

//     int i=0;
//     int marks[5];

//     printf("Enter your marks for Maths:  ");
//     scanf("%d", &marks[0]);
//     printf("Enter your marks for PPS: ");
//     scanf("%d", &marks[1]);
//     printf("Enter your marks for Chemistry: ");
//     scanf("%d", &marks[2]);
//     printf("Enter your marks for English: ");
//     scanf("%d", &marks[3]);
//     printf("Enter your marks for German: ");
//     scanf("%d", &marks[4]); 

//     for (i=0; i<5; i++){
//         printf("%d\n", marks[i]);
//     }
// }

#include <stdio.h>

void main(){

    int i=0;
    int marks[5];
    char sub_name[5][10]={"Maths",  "PPS", "Chemistry", "English", "German"};

    for (i=0; i<5; i++){
    printf("Enter your marks for %s: ", sub_name[i]);
    scanf("%d", &marks[i]);
    }

    for (i=0; i<5; i++){
        printf("%d\n", marks[i]);
    }
}