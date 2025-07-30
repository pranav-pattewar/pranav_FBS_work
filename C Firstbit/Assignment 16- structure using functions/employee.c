// structure employee
#include<stdio.h>
#include<string.h>

struct employee{
	int id;
	char name[20];
	float salary;
};

struct employee storeEmployee(struct employee emp) {
    printf("Enter id, name and salary: ");
    scanf("%d", &emp.id);
    fflush(stdin);
    scanf("%s", emp.name);
    scanf("%f", &emp.salary);
    return emp;
}

void displayEmployee(struct employee emp) {
    printf("Id: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
}

void main() {
	struct employee emp1;
	printf("Enter details for Employee 1\n");
	emp1 = storeEmployee(emp1);
    printf("\nDetails of Employee 1\n");
    displayEmployee(emp1);
}