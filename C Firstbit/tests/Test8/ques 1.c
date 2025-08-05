/*Write a program to prompt user to enter userid and password. After verifying userid and
password display a 4 digit random number and ask user to enter the same. If user enters the
same number then show him success message otherwise failed.*/
#include <stdio.h>
#include <string.h>

void main() 
{
    char userid[20], password[20];
    char correctUser[] = "admin", correctPass[] = "1234";
    int randomNum = 5678; // hardcoded 4-digit number
    int userNum;

    printf("Enter UserID: ");
    scanf("%s", userid);
    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(userid, correctUser) == 0 && strcmp(password, correctPass) == 0) {
        printf("Random number: %d\n", randomNum);

        printf("Enter the same number: ");
        scanf("%d", &userNum);

        if (userNum == randomNum)
            printf("Success! Login Verified.\n");
        else
            printf("Failed! Number mismatch.\n");
    } else {
        printf("Invalid UserID or Password.\n");
    }

}
