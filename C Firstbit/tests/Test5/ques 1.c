/* ques1- WAP to calculate selling price of book based on cost price and discount.
( using function and nested if- else )
*/
#include <stdio.h>
void calcSellingPrice(float , float ); //decl
void main()
{
    float cost, discount;
    printf("Enter cost price: ");
    scanf("%f", &cost);
    printf("Enter discount percentage: ");
    scanf("%f", &discount);

    calcSellingPrice(cost, discount); //call
} // main ends here
void calcSellingPrice(float cost, float discount) //def
{
    float sellingPrice;
    if (discount > 0) {
        sellingPrice = cost - (cost * discount / 100);
    } else {
        sellingPrice = cost;
    }
    printf("Selling price: %f\n", sellingPrice);
}
