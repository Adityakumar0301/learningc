#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {

    int n, i, j, maxIndex;

    struct Student temp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    
    for (i = 0; i < n; i++) {

        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

   
    for (i = 0; i < n - 1; i++) {

        maxIndex = i;

        for (j = i + 1; j < n; j++) {

            if (s[j].marks > s[maxIndex].marks) {
                maxIndex = j;
            }
        }

        
        temp = s[i];
        s[i] = s[maxIndex];
        s[maxIndex] = temp;
    }

    
    printf("\nStudent Records in Descending Order of Marks:\n");

    printf("\nRoll No\tName\tMarks\n");

    for (i = 0; i < n; i++) {

        printf("%d\t%s\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }

    return 0;
}