//SalesManager (id, name, salary, incentive, target)
#include<stdio.h>
#include<string.h>

struct salesmanager{
	int id;
	char name[20];
	float salary,incentive,target;
};

struct salesmanager storeSalesManager(struct salesmanager sm) {
    printf("Enter id, name, salary, incentive, target: ");
    scanf("%d", &sm.id);
    fflush(stdin);
    scanf("%s", sm.name);
    scanf("%f", &sm.salary);
    scanf("%f", &sm.incentive);
    scanf("%f", &sm.target);
    return sm;
}

void displaySalesManager(struct salesmanager sm) {
    printf("Sales Manager details: id=%d, name=%s, salary=%.2f, incentive=%.2f, target=%.2f\n", sm.id, sm.name, sm.salary, sm.incentive, sm.target);
}

void main() {
	struct salesmanager sm1;
	printf("Enter details for Sales Manager 1\n");
	sm1 = storeSalesManager(sm1);
    printf("\nDetails of Sales Manager 1\n");
    displaySalesManager(sm1);
}