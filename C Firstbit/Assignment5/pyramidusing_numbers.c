//pyramid using numbers 
#include<stdio.h>
void main()
{
    int i, j, n;
    int num=1;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        for(j = 1; j <= i; j++) 
        {
            printf("%d",num);
            num++;
        }
        printf("\n"); 
    }
}

