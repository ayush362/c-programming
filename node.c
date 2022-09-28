#include <stdio.h>

int main(void)
{
    int nums[5], index;
    printf("Enter elements in the array:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter the index to remove the element:");
    scanf("%d", &index);
    if (index <= 4)
    {
        for (int j = index; j < 5; j++)
        {
            nums[j] = nums[j+ 1];
        }
        for (int k = 0; k < 4; k++)
        {
            printf("%d", nums[k]);
        }
    }
    else
    {
        printf("Error");
    }
}