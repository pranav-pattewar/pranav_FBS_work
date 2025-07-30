//Date (day, month, year)
#include<stdio.h>

struct date{
	int day,month,year;
};

struct date storeDate(struct date d) {
    printf("Enter date in format (dd mm yyyy): ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);
    return d;
}

void displayDate(struct date d) {
    printf("Date: %02d/%02d/%04d\n", d.day, d.month, d.year);
}

void main() {
	struct date d1;
	printf("Enter details for Date 1\n");
	d1 = storeDate(d1);
    printf("\nDetails of Date 1\n");
    displayDate(d1);
}