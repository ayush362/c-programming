#include <stdio.h>
#include <string.h>

char left_pairs[3] = {'(', '{', '['};
char right_pairs[3] = {')', '}', ']'};

int find_index(char input)
{
    int index;
    for (int i = 0; i < 3; i++)
    {
        if (input == left_pairs[i])
        {
            index = i;
            break;
        }
    }
    return index;
}

int check_pair(char left, char right)
{
    int index = find_index(left);
    if (right == right_pairs[index])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int flag = 1;

    char input[20];
    printf("Enter the parantheses: ");
    fgets(input, 20, stdin);
    int l = strlen(input);
    input[l - 1] = '\0';
    l--;

    if (l % 2 == 0)
    {
        for (int i = 0; i < l / 2; i++)
        {
            int left = input[i];
            int right = input[l-1-i];
            int is_pair = check_pair(left, right);
            if (is_pair == 0)
            {
                flag=0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("Valid parantheses\n");
        }
        else
        {
            printf("Invalid parantheses\n");
        }
    }
    else
    {
        printf("Error pairs not given\n");
    }
}