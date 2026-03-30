#include <stdio.h>

int main()
{ 
// integer scanf

    int age;
    printf("Enter You'r Age: ");
    scanf("%d" , &age); //&age (Memory Location Address)
    printf("You'r Age Is %d\n", age);

// string scanf

    char name[10];
    printf("Please Type You'r Name :");
    scanf("%s" , &name);
    printf("Hi %s\n", name);

    return 0;
}