#include <stdio.h>

void print_array(int *nums,int length)
{
    for(int i=0;i<length;i++)
    {
        printf("%d ",nums[i]);
    }
}

void swap(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

int main(void)
{
    int length = 10,index;
    int nums[10] = {10, 7, 8, 5, 2, 4, 3, 1, 9, 6};
    //int nums[10] ={10,7,6};
    for (int i = 1; i < length; i++)
    {
        index=i;
        for (int j = i-1; j >=0; j--)
        {
            if(nums[index]<nums[j])
            {
                swap(&nums[index],&nums[j]);
                index--;
            }
            
        }
    }
    print_array(nums,length);
}