#include<stdio.h>
#include<string.h>
int main(){
    struct person
    {
        char name [50];
        int age, salary;
    };
    struct person one;
    struct person two;

    one.age=24;
    one.salary=1000;
    strcpy(one.name,"aditya");

    two.age=22;
    two.salary=2000;
    strcpy(two.name,"anshil");

    printf("%s\n",one.name);
    printf("%d",two.age);

    

    return 0;
}