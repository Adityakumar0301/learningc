#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

void checkDepartment(struct Student s1, struct Student s2) {
    
    if (strcmp(s1.department, s2.department) == 0) {
        printf("Both students belong to the same department: %s\n", s1.department);
    } else {
        printf("The students belong to different departments (%s and %s).\n", s1.department, s2.department);
    }
}

int main() {
    
    struct Student student1 = {101, "Aarav Sharma", "Computer Science", "B.Tech", 2024};
    struct Student student2 = {102, "Diya Patel", "Computer Science", "B.Tech", 2024};

   
    checkDepartment(student1, student2);

    return 0;
}
