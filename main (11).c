
#include <stdio.h>

int main()
{
   //step 1 
   //sum of all number given 
   
   
   // step 2 
    int n, i, sum = 0;

   //step 3 
    printf("Enter a positive integer: ");  
    
    //step 4 
    scanf("%d", &n);

    //step 5 
    for (i = 1; i <= n; ++i) {
        sum += i; // Add the current number to the sum
    }

    //step 6 
    printf("Sum of numbers up to %d is: %d\n", n, sum);

    return 0; // Indicate successful execution
}
