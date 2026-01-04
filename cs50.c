#include <stdio.h>

int main(void)
{
    char name[100];

    printf("Name: ");
    fgets(name, 100, stdin);


    printf("hello,%s\n", name);

    return 0;
}