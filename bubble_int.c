#include <stdio.h>

void print_array(int *nums)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", nums[i]);
    }
}

void swap(int *n1, int *n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(void)
{
    int length = 10;
    // int nums[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int nums[10] = {10, 7, 8, 5, 2, 4, 3, 1, 9, 6};
    int i, j, temp = 0;
    for (i = 0; i < length - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < length - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(&nums[j], &nums[j+1)];
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    print_array(nums);
}
