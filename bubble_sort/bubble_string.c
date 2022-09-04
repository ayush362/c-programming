#include <stdio.h>
#include <string.h>

void swap(char **s1, char **s2){
    char *temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main(void)
{
    char *names[5] = {"Ayush", "Anand", "Sangeet", "Khatri", "Dev"};
    int i, j;
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - 1; j++)
        {

            int ans = strcmp(names[j], names[j + 1]);
            if (ans > 1)
            {
                swap(&names[j], &names[j+1]);
            }
        }
    }
    int k;
    for (k = 0; k < 5; k++)
    {
        printf("%s ", names[k]);
    }
}
