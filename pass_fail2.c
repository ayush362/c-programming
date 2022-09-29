#include <stdio.h>

struct Subjects
{
    char name[20];
    int marks;
    int assignment;
};

struct Student
{
    char name[20];
    struct Subjects subject[5];
};

int cal_marks(struct Student s)
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total = total + s.subject[i].marks;
        //  A_total=A_total+s.subject[i].assignment;
    }
    return total;
};

int assignment_marks(struct Student s)
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total = total + s.subject[i].assignment;
    }
    return total;
}

int main(void)
{
    struct Student students[3] = {
        {"Ayush",
         {{"Maths", 77, 9},
          {"English", 89, 10},
          {"Hindi", 95, 7},
          {"Accounts", 87, 6},
          {"Economics", 78, 5}}},
        {"Sangeet",
         {{"Maths", 17, 10},
          {"English", 69, 9},
          {"Hindi", 94, 8},
          {"Accounts", 23, 9},
          {"Economics", 18, 8}}},
        {"Dev",
         {{"Maths", 97, 9},
          {"English", 49, 3},
          {"Hindi", 25, 9},
          {"Accounts", 77, 10},
          {"Economics", 68, 6}}}};

    for (int i = 0; i < 3; i++)
    {
        int M_total = cal_marks(students[i]);
        int A_total = assignment_marks(students[i]);
        printf("%s has scored %d in Theory",students[i].name ,M_total);
        printf(" and %d in Assignment\n",A_total);
    }
}
