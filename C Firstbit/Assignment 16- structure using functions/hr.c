//HR (id, name, salary, commission)
#include<stdio.h>
#include<string.h>

struct hr{
	int id;
	char name[20];
	float salary,commission;
};

struct hr storeHR(struct hr h) {
    printf("Enter id, name, salary and commission: ");
    scanf("%d", &h.id);
    fflush(stdin);
    scanf("%s", h.name);
    scanf("%f", &h.salary);
    scanf("%f", &h.commission);
    return h;
}

void displayHR(struct hr h) {
    printf("HR details: id=%d, name=%s, salary=%.2f, commission=%.2f\n", h.id, h.name, h.salary, h.commission);
}

void main() {
	struct hr hr1;
	printf("Enter details for HR 1\n");
	hr1 = storeHR(hr1);
    printf("\nDetails of HR 1\n");
    displayHR(hr1);
}