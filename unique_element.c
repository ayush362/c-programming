#include <stdio.h>

void print_array(int nums[10], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int search_number(int nums[10], int num, int length)
{
    int flag = 0;
    for (int i = 0; i < length; i++)
    {
        if (num == nums[i])
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main(void)
{
    int length = 10;
    int nums[10] = {10, 7, 7, 5, 2, 7, 3, 1, 9, 3};
    int unique[10];
    int index = 0;
    for (int i = 0; i < 10; i++)
    {
        int flag = search_number(unique, nums[i], index);
        if (flag == 0)
        {
            unique[index] = nums[i];
            index++;
        }
    }
    print_array(unique, index);
}