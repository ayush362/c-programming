#include <stdio.h>

struct Student
{
    char *name;
    int marks[5];
};

// Sort this by marks of students in descending order

int main(void)
{
    struct Student students[5] = {
        {"Sangeet", {50, 60, 70, 80, 90}},
        {"Ayush", {88, 55, 77, 45, 86}},
        {"Dev", {85, 58, 98, 57, 82}},
        {"Anil", {58, 75, 66, 99, 66}},
        {"Anand", {52, 66, 80, 70, 85}}};

    int i;
    for (i = 0; i < 5; i++)
    {
        int j, marks = 0;
        for (j = 0; j < 5; j++)
        {
            marks = marks + students[i].marks[j];
        }
        // Make changes here
        printf("%s:%d\n", students[i].name, marks);
    }
}
