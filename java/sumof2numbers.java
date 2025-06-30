//print sum of two integers taken from users 

import java.util.Scanner;

public class sumof2numbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a: ");
        int a= sc.nextInt();
        System.out.println("Enter b: ");
        int b= sc.nextInt();
        int sum = a+b;
        System.out.println("Sum of a and b is " + sum);
        sc.close();
    }
    
}
