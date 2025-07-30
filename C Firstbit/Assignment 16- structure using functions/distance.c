//Distance ( feet, inch)
#include<stdio.h>

struct distance{
	int feet,inch;
};

struct distance storeDistance(struct distance dis) {
    printf("Enter feet and inch: ");
    scanf("%d", &dis.feet);
    scanf("%d", &dis.inch);
    return dis;
}

void displayDistance(struct distance dis) {
    printf("Distance: %d\' %d\"\n", dis.feet, dis.inch);
}

void main() {
	struct distance dis1;
	printf("Enter details for Distance 1\n");
	dis1 = storeDistance(dis1);
    printf("\nDetails for Distance 1\n");
    displayDistance(dis1);
}