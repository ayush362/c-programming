#include <stdio.h>
#include <string.h>

void print_array(char **strings)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%s ", strings[i]);
    }
    printf("\n");
}

void swap(char **n1, char **n2)
{
    char *temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(void)
{
    int index = 0;
    char *names[5] = {"Ayush", "Anand", "Sangeet", "Khatri", "Dev"};
    for (int i = 1; i < 5; i++)
    {
        index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            int value = strcmp(names[index], names[j]);
            if (value < 0)
            {
                swap(&names[index], &names[j]);
                index--;
            }
        }
    }
    print_array(names);
}