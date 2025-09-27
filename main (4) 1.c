
#include <stdio.h>

int main()
{
    //STEP 1
  //LET A,B &C BE THREE NUMBERS
  
  //STEP 2 
  int a;
  printf("Enter the value of a:");
  scanf("%d",&a);
 
    int b;
  printf("Enter the value of b:");
  scanf("%d",&b);
  
    int c;
  printf("Enter the value of c:");
  scanf("%d",&c);
  
  //step 3
  if(a>b && a>c){
      printf("%d is greatest",a);
  }
  //step 4
  if(b>a && b>c){
      printf("%d is greatest",b);
  }
  //step 5
  if(c>a && c>b){
      printf("%d is greatest",c);
  }

    return 0;
}