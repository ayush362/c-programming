#include <stdio.h>

// Pass By Value
// Creates a copy which is scoped to this function
// Scope = Limited to curly braces
void print_next(int num){
    num = num + 1;
    printf("Value Function: %d\n", num);
}

// Pass By Reference
// You are sending the address of the actual number and then modifying it.
// This means you are mofiying the sent value itslef
void print_next_ptr(int *address){
    *address = *address + 1;
    printf("Ptr Function: %d\n", *address);
}

int main(void){
    int age = 18;

    print_next(age);
    printf("Main: %d\n",age);

    printf("\n");

    print_next_ptr(&age);
    printf("Main: %d\n",age);
}
