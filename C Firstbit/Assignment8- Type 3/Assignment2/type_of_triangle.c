//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.
#include<stdio.h>
void typeOfTriangle(float,float,float);
void main()
{
	float s1,s2,s3;
	printf("Enter lenght of three sides of triangle to check type of triangle:");
	scanf("%f%f%f",&s1,&s2,&s3);
	typeOfTriangle(s1,s2,s3);
}
void typeOfTriangle(float s1,float s2, float s3)
{
	
	if(s1==s2 && s2==s3) //equilateral triangle
	{
		printf("It is equilateral triangle");
	}
	else if (s1==s2 || s2==s3 || s1==s3 ) //iso
	{
		printf("It is isosceles triangle");
	}
	else
	{
		printf("It is scalene triangle");
	}
}