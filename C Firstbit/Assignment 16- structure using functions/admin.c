//Admin (id, name, salary, allowance)
#include<stdio.h>
#include<string.h>

struct admin{
	int id;
	char name[20];
	float salary,allowance;
};

struct admin storeAdmin(struct admin adm) {
    printf("Enter id, name, salary and allowance: ");
    scanf("%d", &adm.id);
    fflush(stdin);
    scanf("%s", adm.name);
    scanf("%f", &adm.salary);
    scanf("%f", &adm.allowance);
    return adm;
}

void displayAdmin(struct admin adm) {
    printf("Admin details: id=%d, name=%s, salary=%.2f, allowance=%.2f\n", adm.id, adm.name, adm.salary, adm.allowance);
}

void main() {
	struct admin adm1;
	printf("Enter details for Admin 1\n");
	adm1 = storeAdmin(adm1);
    printf("\nDetails of Admin 1\n");
    displayAdmin(adm1);
}