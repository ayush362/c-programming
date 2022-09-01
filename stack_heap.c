#include <stdio.h>
#include <stdlib.h>

int main(void){
    int nums[5] = {1,2,3,4,5};

    int *marks = malloc(sizeof(int) * 5);
    marks[0] = 10;

    printf("Stack: %p\n", nums);
    printf("Heap: %p\n", marks);

    char one[10] = "Test";
    char *two = "Test";

    printf("\n");

    printf("Stack: %p\n", one);
    printf("Heap: %p\n", two);

}
