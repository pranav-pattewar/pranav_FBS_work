//menu driven code

#include <stdio.h>

int menuDriven();

void main() 
{
	int result = menuDriven();

	if(result != -1)
		printf("Result: %d\n", result);
}

int menuDriven()
{
	int choice, num, i, temp, rev = 0, sum = 0, digit, flag = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("\nSelect an operation:\n");
	printf("1. Check Even or Odd\n");
	printf("2. Check Prime or Not\n");
	printf("3. Check Palindrome or Not\n");
	printf("4. Check Positive, Negative or Zero\n");
	printf("5. Reverse the Number\n");
	printf("6. Sum of Digits\n");
	printf("Enter your choice (1-6): ");
	scanf("%d", &choice);

	if(choice == 1) {
		return (num % 2 == 0) ? 1 : 0; // 1 = Even, 0 = Odd
	}
	else if(choice == 2) {
		if(num < 2)
			return 0;
		for(i = 2; i <= num / 2; i++) {
			if(num % i == 0)
				return 0;
		}
		return 1; // Prime
	}
	else if(choice == 3) {
		temp = num;
		while(temp > 0) {
			digit = temp % 10;
			rev = rev * 10 + digit;
			temp = temp / 10;
		}
		return (rev == num);
	}
	else if(choice == 4) {
		if(num > 0) return 1;     // Positive
		else if(num < 0) return -1; // Negative
		else return 0;            // Zero
	}
	else if(choice == 5) {
		temp = num;
		while(temp > 0) {
			digit = temp % 10;
			rev = rev * 10 + digit;
			temp = temp / 10;
		}
		return rev;
	}
	else if(choice == 6) {
		temp = num;
		while(temp > 0) {
			digit = temp % 10;
			sum += digit;
			temp = temp / 10;
		}
		return sum;
	}
	else {
		printf("Invalid choice.\n");
		return -1;
	}
}
