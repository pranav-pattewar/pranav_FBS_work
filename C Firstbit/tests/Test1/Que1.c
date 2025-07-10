//convert time entered in hh,min,sec into total seconds
#include<stdio.h>
void main()
{
	int hrs,min,sec,totalSec;
	printf("Enter time in order of hh:mm:ss =");
	scanf("%d%d%d",&hrs,&min,&sec);
	totalSec = (hrs*3600)+(min*60)+(sec);
	printf("Total seconds in %dhrs,%dmins,%dsecs are: %d",hrs,min,sec,totalSec);
}
