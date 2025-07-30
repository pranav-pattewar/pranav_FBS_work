// Complex (real, imaginary)
#include<stdio.h>

struct complex{
	int real,img;
};

struct complex storeComplex(struct complex c) {
    printf("Enter real and imaginary parts: ");
    scanf("%d", &c.real);
    scanf("%d", &c.img);
    return c;
}

void displayComplex(struct complex c) {
    printf("Complex number: %d + %di\n", c.real, c.img);
}

void main() {
	struct complex c1;
	printf("Enter details for Complex Number 1\n");
	c1 = storeComplex(c1);
    printf("\nDetails of Complex Number 1\n");
    displayComplex(c1);
}