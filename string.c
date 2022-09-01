#include <stdio.h>
#include <stdlib.h>

int main(void){
    char input[10];
    char *remainder;

    printf("Enter a value:");
    fgets(input,10,stdin);

    int num;
    //input is passed by value
    //remainder is passed by reference
    num = strtol(input, &remainder, 10);

    printf("Number is: %d\n",num);
    printf("Remainder: %s\n",remainder);
}
