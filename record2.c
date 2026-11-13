
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks[5];
    float total;
    float percentage;
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

        printf("\nEnter details of Student %d\n", i+1);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        s[i].total = 0;

        for(int j = 0; j < 5; j++) {

            printf("Enter marks in subject %d: ", j+1);
            scanf("%f", &s[i].marks[j]);

            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 5;


        if(s[i].percentage >= 90)
            s[i].grade = 'A';

        else if(s[i].percentage >= 80)
            s[i].grade = 'B';

        else if(s[i].percentage >= 70)
            s[i].grade = 'C';

        else if(s[i].percentage >= 60)
            s[i].grade = 'D';

        else
            s[i].grade = 'F';
    }

    
    int topper = 0;

    for(int i = 1; i < n; i++) {

        if(s[i].total > s[topper].total) {
            topper = i;
        }
    }

    
    printf("\n===== STUDENT RESULTS =====\n");

    for(int i = 0; i < n; i++) {

        printf("\nName: %s", s[i].name);
        printf("\nRoll: %d", s[i].roll);
        printf("\nTotal: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%", s[i].percentage);
        printf("\nGrade: %c\n", s[i].grade);
    }

    printf("\n===== CLASS TOPPER =====\n");

    printf("Name: %s\n", s[topper].name);
    printf("Roll: %d\n", s[topper].roll);
    printf("Percentage: %.2f%%\n", s[topper].percentage);

    return 0;
}