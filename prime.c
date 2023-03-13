#include<stdio.h>
int prime(int num)
{
    int flag=1;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
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
        int result = prime(arr[j]);
        if(result==1)
        {
            printf("%d\n",arr[j]);
        }
    }
    
}