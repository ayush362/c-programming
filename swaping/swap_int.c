#include <stdio.h>

void swap(int *n1, int *n2){
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    // n1 and n2 are destroyed
    // but n1 and n2 are only addresses
    // their addresss values, 
    // i.e a and b in main function have been changed
}

int main(void){
    int a = 10;
    int b = 20;

    printf("a:%d, b:%d\n",a,b);

    swap(&a, &b);

    printf("a:%d, b:%d\n",a,b);
}
