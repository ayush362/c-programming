#include <stdio.h>

struct Student
{
    char name[20];
    int marks[5];
};

int calculate_marks(struct Student student)
{
    int marks = 0;
    for (int i = 0; i < 5; i++)
    {
        marks = marks + student.marks[i];
    }
    return marks;
}

void print(struct Student student)
{
    int total = calculate_marks(student);
    printf("%s %d\n", student.name, total);
}

void swap(struct Student *s1, struct Student *s2)
{
    struct Student temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main(void)
{
    int index=0;
    struct Student students[5] = {
        {"Sangeet", {80, 90, 70, 80, 90}},
        {"Dev", {85, 58, 98, 57, 82}},
        {"Anil", {58, 75, 66, 99, 66}},
        {"Ayush", {88, 55, 77, 45, 86}},
        {"Anand", {52, 66, 80, 70, 85}}};

    for (int i = 1; i < 5; i++)
    {
        index=i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (calculate_marks(students[index]) < calculate_marks(students[j]))
            {
                swap(&students[index], &students[j]);
                index--;
            }
        }
    }
    for (int k = 0; k < 5; k++)
    {
        print(students[k]);
    }
}
