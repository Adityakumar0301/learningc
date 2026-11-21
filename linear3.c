#include <stdio.h>
struct Student {
 int roll;
 char name[50];
 float marks;
};
int linearSearch(struct Student s[], int n, int key) {
 for (int i = 0; i < n; i++) {
 if (s[i].roll == key) {
 return i; 
 }
 }
 return -1;
}
int main() {
 struct Student s[100];
 int n, key, index;
 printf("Enter number of students: ");
 scanf("%d", &n);
 for (int i = 0; i < n; i++) {
 printf("\\nEnter roll number, name and marks: ");
 scanf("%d", &s[i].roll);
 scanf(" %49[^\\n]", s[i].name);
 scanf("%f", &s[i].marks);
 }
 printf("\\nEnter roll number to search: ");
 scanf("%d", &key);
 index = linearSearch(s, n, key);
 if (index == -1) {
 printf("\\nStudent not found.\\n");
 } else {
 printf("\\nStudent found!\\n");
 printf("Roll Number: %d\\n", s[index].roll);
 printf("Name : %s\\n", s[index].name);
 printf("Marks : %.2f\\n", s[index].marks);
 }
 return 0;
}