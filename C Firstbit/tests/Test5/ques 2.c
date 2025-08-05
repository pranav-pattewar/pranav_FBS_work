/* ques 2- WAP to initialize some amount in your account. Then give choice to user for deposit or
withdraw. and display updated amount. Condition to withdraw (if the balance is less than
3000 display can't withdraw the amount balance is not sufficient).*/

#include <stdio.h>
float deposit(float , float ); //decl
float withdraw(float , float ); //decl
void main() 
{
    float balance = 5000, amount;
    int choice;

    printf("Initial balance: %.2f\n", balance);
    printf("Enter 1 to Deposit, 2 to Withdraw: ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    if (choice == 1)
        balance = deposit(balance, amount); //call
    else if (choice == 2)
        balance = withdraw(balance, amount); //call
    else
        printf("Invalid choice.\n");

    printf("Updated balance: %.2f\n", balance);
    
} //main ends here 


float deposit(float balance, float amount) //def 
{
    return balance + amount;
}

float withdraw(float balance, float amount) //def
{
    if (balance < 3000) {
        printf("Can't withdraw. Balance is not sufficient.\n");
        return balance;
    }
    if (amount > balance) {
        printf("Can't withdraw more than available balance.\n");
        return balance;
    }
    return balance - amount;
}

