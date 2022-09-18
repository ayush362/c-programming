#include <stdio.h>
#include <string.h>

struct Subject
{
    char name[20];
    int mark;
};

struct Student
{
    char name[20];
    struct Subject subjects[5];
};

int cal_marks(struct Student s1)
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total = total + s1.subjects[i].mark;
    }
    return total;
}

void check_pass(struct Student s1)
{
    int count = 0;
    char subjects[5][20];
    for (int i = 0; i < 5; i++)
    {
        if (s1.subjects[i].mark < 40)
        {
            strcpy(subjects[count], s1.subjects[i].name);
            count++;
        }
    }
    if (count > 0)
    {
        printf("%s has failed in subjects: ", s1.name);
        for (int i = 0; i < count; i++)
        {
            printf("%s ", subjects[i]);
        }
        printf("\n");
    }
}

int main(void)
{
    struct Student students[3] = {
        {"Ayush",
         {{"Maths", 77},
          {"English", 89},
          {"Hindi", 95},
          {"Accounts", 87},
          {"Economics", 78}}},
        {"Sangeet",
         {{"Maths", 17},
          {"English", 69},
          {"Hindi", 94},
          {"Accounts", 23},
          {"Economics", 18}}},
        {"Dev",
         {{"Maths", 97},
          {"English", 49},
          {"Hindi", 25},
          {"Accounts", 77},
          {"Economics", 68}}}};
    for (int i = 0; i < 3; i++)
    {
        // int total = cal_marks(students[i]);
        check_pass(students[i]);
    }
}