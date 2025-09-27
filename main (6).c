
#include <stdio.h>

int main()
{
     //step 1 
    // we have to detwrmine whether the year is leap or not 
    
    //step 2 
    //introduce n as year 
    
    //step 3 
    int n;
    
    //step 4 
    printf("Enter the value of a year :");
    
    //step 5 
    scanf("%d",&n);
    
    //step 6 
    if(n%400==0 || n%4==0 && n%100!=0){
        printf("The year is leap year");
    }
    else{
        printf("The year is not leap year");
    }
   
   
   
   
   
   

    return 0;
}