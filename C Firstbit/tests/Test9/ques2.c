// ques2- accept age of five people and ticket amt and then calculate total ticket amt after discount based on condition :
// chidlren below 12= 30%  discount , senior citizen above 59= 50% discount , others no discount full price 

#include <stdio.h>

void main() {
    int age[5];
    float ticketAmt, total = 0, discountedAmt;

    printf("Enter ticket amount: ");
    scanf("%f", &ticketAmt);

    for (int i = 0; i < 5; i++) {
        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &age[i]);

        if (age[i] < 12) {
            discountedAmt = ticketAmt * 0.70; // 30% discount
        }
        else if (age[i] > 59) {
            discountedAmt = ticketAmt * 0.50; // 50% discount
        }
        else {
            discountedAmt = ticketAmt; // no discount
        }

        printf("Ticket amount after discount for person %d:Rs. %f\n", i + 1, discountedAmt);
        total += discountedAmt;
    }

    printf("\nTotal ticket amount after discount:Rs. %f", total);
}
