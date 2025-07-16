// que 6- print only prime numbers in array
#include<stdio.h>
void main()
{
	int arr[10];
	printf("Enter 10 numbers in array:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nNumbers in array are:");
	for(int i=0;i<10;i++)
	{
		printf(" %d",arr[i]);
	}
	//logic for prime numbers 
	printf("\nPrime Numbers in array are:");
    for(int i = 0; i < 10; i++)
    {
        int flag = 1;

        if(arr[i] <= 1)
        {
            flag = 0; // 0 and 1 are not prime
        }
        else
        {
            for(int j = 2; j < arr[i]; j++)
            {
                if(arr[i] % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }

        if(flag == 1)
        {
            printf(" %d", arr[i]);
        }
    }
}