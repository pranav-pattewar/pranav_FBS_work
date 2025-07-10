//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

#include<stdio.h>

int typeOfTriangle();

void main()
{
	int type = typeOfTriangle();

	if(type == 1)
		printf("It is equilateral triangle");
	else if(type == 2)
		printf("It is isosceles triangle");
	else if(type == 3)
		printf("It is scalene triangle");
	else
		printf("Invalid triangle sides");
}

int typeOfTriangle()
{
	float s1, s2, s3;
	printf("Enter length of three sides of triangle to check type of triangle: ");
	scanf("%f%f%f", &s1, &s2, &s3);

	if(s1 <= 0 || s2 <= 0 || s3 <= 0)
		return 0;

	if(s1 == s2 && s2 == s3)
		return 1;
	else if(s1 == s2 || s2 == s3 || s1 == s3)
		return 2;
	else
		return 3;
}
