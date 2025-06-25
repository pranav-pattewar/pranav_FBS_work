//calculate total marks and percentage
#include<stdio.h>
void main()
{   float s1,s2,s3,s4,s5,tot;
	float per;
	s1=88,s2=90,s3=95,s4=86,s5=91;
	tot= s1+s2+s3+s4+s5;
	per= (tot/500)*100;
	printf("Total marks of 5 subjects are %f and percentage is %f", tot, per );
}
