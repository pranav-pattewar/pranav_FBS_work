//Product (id, name, quantity, price)
#include<stdio.h>
#include<string.h>

struct product{
	int id,quantity;
	char name[20];
	double price;
};

struct product storeProduct(struct product p) {
    printf("Enter product id, name, quantity and price: ");
    scanf("%d", &p.id);
    fflush(stdin);
    scanf("%s", p.name);
    scanf("%d", &p.quantity);
    scanf("%lf", &p.price);
    return p;
}

void displayProduct(struct product p) {
    printf("Product details: id=%d, name=%s, quantity=%d, price=Rs. %.2lf\n", p.id, p.name, p.quantity, p.price);
}

void main() {
	struct product p1;
	printf("Enter details for Product 1\n");
	p1 = storeProduct(p1);
    printf("\nDetails of Product 1\n");
    displayProduct(p1);
}