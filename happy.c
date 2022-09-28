#include <stdio.h>

int square_num(int num)
{
    int a, square = 0;
    while (num > 0)
    {
        a = num % 10;
        num = num / 10;
        square = square + (a * a);
    }
    return square;
}

int calculate_happy(int num)
{
    int flag = 0;
    while (num > 9)
    {
        num = square_num(num);
    }
    if (num == 1)
    {
        flag = 1;
    }
    return flag;
}

int main(void)
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    int isHappy = calculate_happy(num);
    printf("%s\n",(isHappy == 1 ? "Happy Number" : "Not a happy number"));
}