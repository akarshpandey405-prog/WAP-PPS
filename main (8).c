
#include <stdio.h>

int main()
{
   //step 1 
   //wap that takes operands and operator from the user 
   
   
   //step 2 
    int num1, num2;
    char operator;
    int result;

     //step 3 
    // Prompt user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    
    //step 4 
    printf("Enter an operator (+, -, *, /, %%): ");
    // Note the space before %c to consume any leftover whitespace from previous scanf
    scanf(" %c", &operator); 
    
    
    //step 5 
    printf("Enter second number: ");
    scanf("%d", &num2);
     
     
     //step 6 
    // Perform operation based on the operator using a switch statement
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 != 0) { // Check for division by zero
                result = num1 / num2;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) { // Check for modulus by zero
                result = num1 % num2;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }

    return 0;
}

  

