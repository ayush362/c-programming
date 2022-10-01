#include <stdio.h>
#include <string.h>

int main(void)
{
    int num, pal = 0, digit = 0;
    printf("Enter any numbers:");
    scanf("%d", &num);
    int c=num;
    // int l=strlen(num);
    // for(int i=0;i<num/10;i++)
    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;
        pal = (pal * 10) + digit;
    }
    if(c==pal)
    {
        printf("palindrome number!\n");
    }
    else{
        printf("Not a palindrome number!\n");
    }
}