//convert minutes into hours and remianing minutes 
#include<stdio.h>
void main()
{
	int min,hr,rmin;
	min= 256;
	hr=min/60;
	rmin=min%60;
	printf("%d minutes are %d hours and %d minutes", min,hr,rmin);
}
