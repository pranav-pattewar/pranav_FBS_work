void main()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	
	if(no==reverse(no))
		printf("pallindrome");
	else
		printf("not pallindrome");
	
	int res=isArmstrong(no);
	if(res==1)
		printf("Armstrong");
	else
		printf("Not armstrong");
}//main ends here

int isArmstrong(int no)
{
	int temp=no;
	int count=getCount(no);
	
	int sum=0;
	while(no>0)
	{
		int rem=no%10;
		
		int res=pow(rem,count);
			
		sum=sum+res;
		no=no/10;	
	}
	return sum==temp;
}
int getCount(int no)
{
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	}
	return count;
}//getcount ends here

//int power(int base,int exp)
//{
//	int res=1;
//	for(int i=1;i<=exp;i++)
//		res=res*base;
//	return res;
//}