#include <stdio.h>
void myfn(char name[], int age){
    printf("\nHello %s you are %d years old\n", name, age);
}

void main(){
    myfn("rahul", 24);
    myfn("ravi", 21);
}