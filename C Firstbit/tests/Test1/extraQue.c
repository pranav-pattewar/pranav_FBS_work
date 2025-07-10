// difference between 2 given times and greater among 2 times 
#include<stdio.h>
void main()
{ 
	int hrs1,min1,sec1,totalSec1,hrs2,min2,sec2,totalSec2,hDiff,minDiff,secDiff;
	printf("Enter first time in order of hh:mm:ss =");
	scanf("%d%d%d",&hrs1,&min1,&sec1);
	printf("Enter second time in order of hh:mm:ss =");
	scanf("%d%d%d",&hrs2,&min2,&sec2);
	if (hrs1>hrs2)
	{
		printf("Time 1 is greater than Time 2");
		hDiff=hrs1-hrs2,minDiff=min1-min2,secDiff=sec1-sec2;
		printf("Differnce in both times is %dHrs %dmins %dsecs \n",hDiff,minDiff,secDiff);
	}
	else
	{
		printf("Time 2 is greater than Time 1");
		hDiff=hrs2-hrs1,minDiff=min2-min1,secDiff=sec2-sec1;
		printf("\nDiffernce in both times is %dHrs %dmins %dsecs ",hDiff,minDiff,secDiff);
	}	
}
