#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int marks[5];
};

int calculate_marks(struct Student student){
    int i, marks = 0;
    for (i = 0; i < 5; i++){
        marks = marks + student.marks[i];
    }
    return marks;
}

void print_student(struct Student s){
    int total = calculate_marks(s);
    printf("%s has total %d\n", s.name, total);
}

void swap(struct Student *s1,struct Student *s2){
    struct Student temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main(void) {
    struct Student students[5] = {
        {"Sangeet", {80, 90, 70, 80, 90}},
        {"Dev", {85, 58, 98, 57, 82}},
        {"Anil", {58, 75, 66, 99, 66}},
        {"Ayush", {88, 55, 77, 45, 86}}, 
        {"Anand", {52, 66, 80, 70, 85}}
    };


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5-1; j++) {

            int marks1 = calculate_marks(students[j]);
            int marks2 = calculate_marks(students[j+1]);

            if (marks1 < marks2) {
                swap(&students[j],&students[j+1]);
            }
        }
    }

    for(int i=0;i<5;i++){
        print_student(students[i]);
    }
}

