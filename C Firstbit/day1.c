#include<stdio.h>
/*void main ()
{
printf("This is my first C code ");
}*/ 

int a=31;// global variable
void  display(); // global function 
void main() 
{
	printf("hello I am Pranav\n");
	//calling a function 
	display(); 
	getch();
}
void display()
{
	printf("This is display function");
}
