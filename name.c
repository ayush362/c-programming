#include <stdio.h>
#include <string.h>

struct Person
{
    char name[10];
    char lastname[10];
    int age;
};

void say_hello(struct Person person)
{
    printf("Hello %s %s %d\n", person.name, person.lastname, person.age);
}

int main(void)
{
    struct Person person1 = {"Ayush", "Khatri"};
    person1.age = 18;
    strcpy(person1.name, "Sangeet");
    say_hello(person1);
    // say_hello(person2);
}