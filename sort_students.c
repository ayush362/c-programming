#include <stdio.h>
#include <string.h>

struct Student
{
    char *name;
    int marks[5];
    int total;
};

int calculate_marks(struct Student student)
{
    int i, marks = 0;
    for (i = 0; i < 5; i++)
    {
        marks = marks + student.marks[i];
    }
    return marks;
}
// Sort this by marks of students in descending order

int main(void)
{
    struct Student students[5] = {
        {"Sangeet", {50, 60, 70, 80, 90}},
        {"Dev", {85, 58, 98, 57, 82}},
        {"Anil", {58, 75, 66, 99, 66}},
        {"Ayush", {88, 55, 77, 45, 86}}, 
        {"Anand", {52, 66, 80, 70, 85}}};
    // Make changes here
    int i;
    for (i = 0; i < 5; i++)
    {
        students[i].total = calculate_marks(students[i]);
    }
    i = 0;
    for (i = 0; i < 5; i++)
    {
        int j;
        for (j = 0; j < 5-1; j++)
        {
            struct Student temp;
            if (students[j].total < students[j + 1].total)
            {
                strcpy(temp.name, students[j].name);
                strcpy(students[j].name, students[j + 1].name);
                strcpy(students[j + 1].name, temp.name);
                temp.total = students[j].total;
                students[j].total = students[j + 1].total;
                students[j + 1].total = temp.total;
                
            }
        }
        // printf("%s:%d\n", students[i].name, students[i].total);
    }
}