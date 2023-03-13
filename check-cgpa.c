#include <stdio.h>
struct student
{
    char name[20];
    int marks[3];
};

int checkCgpa(struct student s)
{
    float cgpa=0,gp=0;
    for (int i = 0; i < 3; i++)
    {
        gp = ((float)s.marks[i]/100)*10;
        cgpa += gp;
    }
    return cgpa/3;
}

void main()
{
    int cgpa[3], highest = 0;
    struct student s[3] = {
        {"Ayush", 10, 20, 30},
        {"Suleman", 30, 67, 45},
        {"Tezodipta", 56, 46, 78}};
    for (int i = 0; i < 3; i++)
    {
        cgpa[i] = checkCgpa(s[i]);
    }
    for (int j = 0; j < 3; j++)
    {
        if (cgpa[highest] < cgpa[j])
        {
            highest = j;
        }
    }
    printf("%s student got highest cgpa which is %d",s[highest].name,cgpa[highest]);
}