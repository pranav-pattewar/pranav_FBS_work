// ques 2- check if array is palindrome or not (using function) 
#include<stdio.h>

int isPalindrome(int* arr, int n); // Function declaration

void main()
{
    int arr[100];
    int n;
    printf("Enter number of elements you want in array: ");
    scanf("%d", &n);

    printf("\nEnter %d numbers in array:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nOriginal array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    int res = isPalindrome(arr, n); // Function call

    if(res == 1)
        printf("\nPalindrome");
    else
        printf("\nNot Palindrome");
}

int isPalindrome(int* arr, int n)
{
    for(int i = 0; i < n / 2; i++)  
    {
        if(arr[i] != arr[n - 1 - i])  
            return 0; 
    }
    return 1; 
}
