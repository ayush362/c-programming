#include <stdio.h>
void main ()
{
    int arr[2][2]= {1,2,3,4};
    int arr2[2][2] = {5,6,7,8};
    int arr3[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr3[i][j] = 0;
            for (int z=0; z <2; z++)
            {
            arr3[i][j] =arr3[i][j] + arr[i][z] * arr2[z][j] ;
            }
            
        }
    }
    for (int k = 0; k < 2; k++)
    {
        for(int l=0;l<2;l++)
        {
        printf("%d ",arr3[k][l]);

        }
        printf("\n");
    }
    
    // 00*00 + 01*10
    // 00*01 + 01*11

    // 10*00 + 11*10
    // 10*01 + 11*11
}