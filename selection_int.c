#include <stdio.h>

void print_array(int nums[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", nums[i]);
    }
}



void swap(int *s1, int *s2)
{
    int temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
int main(void)
{
    int length = 10;
    int nums[10] = {10, 7, 8, 5, 2, 4, 3, 1, 9, 6};
    for(int i=0;i<length-1;i++)
    {
        int min=i;
        for(int j=i+1;j<length;j++)
        {
            if(nums[min]>nums[j])
            {
                 min=j;
            }
        }
        swap(&nums[i],&nums[min]);
    }
    print_array(nums);
}