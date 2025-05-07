#include <stdio.h>
#include <stdlib.h>


struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person newPerson;

    printf("Insert person name: \n");
    scanf("%s", newPerson.name);

    printf("Insert person age: \n");
    scanf("%d", &newPerson.age);

    printf("Insert person height: \n");
    scanf("%f", &newPerson.height);

    printf("\n Person info: \n");
    printf("Name: %s.\n", newPerson.name);
    printf("Age: %d years old.\n", newPerson.age);
    printf("Height: %.2f meters.\n", newPerson.height);
}