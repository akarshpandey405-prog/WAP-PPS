
#include <stdio.h>

int main()
{
    //step 1 
    //wap that swaps values of two variables using third variables 
    
    
    //step 2 
    int num1, num2, temp;

   //step 3 
    printf("Enter the first number: ");
    
    //step 4 
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    
    printf("\nBefore swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

   //step 4 
    temp = num1;   // Store the value of num1 in temp
    num1 = num2;   // Assign the value of num2 to num1
    num2 = temp;   // Assign the value of temp (original num1) to num2

   //step 5 
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}
    
    
    
    
    
    
    
    
    
