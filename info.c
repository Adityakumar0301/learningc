
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int class;
    char grade;
};

int main() {

    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid number of students");
        return 0;
    }

    struct Student s[n];

    for(int i = 0; i < n; i++) {

        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter age: ");
        scanf("%d", &s[i].age);

        printf("Enter class: ");
        scanf("%d", &s[i].class);

        printf("Enter grade: ");
        scanf(" %c", &s[i].grade);
    }

    printf("\n----- Student Details -----\n");

    for(int i = 0; i < n; i++) {

        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Class: %d\n", s[i].class);
        printf("Grade: %c\n", s[i].grade);
    }

    return 0;
}
