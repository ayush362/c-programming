#include <stdio.h>
#include <string.h>

struct Person{
    char name[10];
    int age;
};

void print_person(struct Person p){
    printf("%s has age %d\n", p.name, p.age);
}

void swap(struct Person *p1, struct Person *p2){
    struct Person temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void){

    struct Person a = {"Sangeet", 26};
    struct Person b = {"Ayush", 18};

    print_person(a);
    print_person(b);

    swap(&a, &b);

    printf("---\n");
    print_person(a);
    print_person(b);
}
