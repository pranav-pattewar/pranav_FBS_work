// check if number is prime or not 
#include <stdio.h>
void isPrime();
void main() 
{
    isPrime();
}
void isPrime()
{
	int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; 
    } else {

        /*while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = 0; 
                break;       
            }
            i++; 
        }*/
        
        for(i=2;i<=num/2;i++)
        {
        	if (num%i==0)
        	isPrime = 0;
        	break;
		}
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

}