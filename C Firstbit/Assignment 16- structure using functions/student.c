//structure student
#include <stdio.h>
#include <string.h>

struct students {
    int rollno;
    char name[100];
    char gender;
    float marks;
};

struct students storeStudent(struct students s) {
    printf("Enter Roll No, name, gender, marks: ");
    scanf("%d", &s.rollno);
    fflush(stdin);
    scanf("%s", s.name);
    fflush(stdin);
    scanf("%c", &s.gender);
    scanf("%f", &s.marks);
    return s;
}

void displayStudent(struct students s) {
    printf("Roll No: %d, Name: %s, Gender: %c, Marks: %.2f\n", s.rollno, s.name, s.gender, s.marks);
}

void main() {
    struct students s1;
    printf("Enter details for Student 1\n");
    s1 = storeStudent(s1);
    printf("\nDetails of Student 1\n");
    displayStudent(s1);
}