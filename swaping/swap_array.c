#include <stdio.h>

void print_array(int nums[5]){
    for(int i=0; i<5; i++){
        printf("%d\t", nums[i]);
    }
}

void swap(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(void){
    int nums[5] = {1,2,3,4,5};
    swap(&nums[0],&nums[1]);
    print_array(nums);
}
