#include<stdio.h>
void prime(int num)
{
    int flag;
    for(int i=2;i<=num/2;i++)
    {
     flag=0;
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is a prime number\n",num);
    }
}

void main()
{
    int max;
    printf("Enter the size of the array:");
    scanf("%d",&max);
    int arr[max];
    for (int i = 0; i < max; i++)
    {
        printf("Enter %d number in the array:",i+1);
        scanf("%d",&arr[i]);
    }
    for (int j= 0; j < max; j++)
    {
        prime(arr[j]);
    }
    
}