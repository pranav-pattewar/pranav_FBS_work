//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.
#include<stdio.h>
int findTypeOfTriangle(int,int,int); //func declaration
void main()
{
	float s1,s2,s3;
	printf("Enter lenght of three sides of triangle to check type of triangle:");
	scanf("%f%f%f",&s1,&s2,&s3);
	findTypeOfTriangle(s1,s2,s3);//function call 
	if(findTypeOfTriangle(s1,s2,s3)==1) //equilateral triangle
	{
		printf("It is equilateral triangle");
	}
	else if (findTypeOfTriangle(s1,s2,s3)==2 ) //iso
	{
		printf("It is isosceles triangle");
	}
	else
	{
		printf("It is scalene triangle");
	}
} //main ends here 
int findTypeOfTriangle(int s1,int s2,int s3) //func defination
{
	if(s1==s2 && s2==s3) //equilateral triangle
	{
		return 1;
	}
	else if (s1==s2 || s2==s3 || s1==s3 ) //isoscele
	{
		return 2;
	}
	else//scalene
	{
		return 3;
	}
}