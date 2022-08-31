#include <stdio.h>
#include <string.h>

int main(void)
{
    char names[5][10] = {"Ayush", "Anand", "Sangeet", "Khatri", "Dev"};
    int i, j;
    char temp[10];
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - 1; j++)
        {

            int ans = strcmp(names[j], names[j + 1]);
            if (ans > 1)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    int k;
    for (k = 0; k < 5; k++)
    {
        printf("%s ", names[k]);
    }
}