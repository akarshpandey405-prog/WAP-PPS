
#include <stdio.h>

int main()
{


  //step 1 
  // accepts the marks of five subjects and give grades according to it 


  //step 2   
  float m1,m2,m3,m4,m5,percent;
 
 
 //step 3
  printf("Enter the marks of the student in 5 subjects:\n");


 //step 4 
  scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);


 //step 5
  percent=(m1+m2+m3+m4+m5)/5;
 
  printf("\nPercentage=%f",percent);

  //step 6
 
  if(percent>90.0 && percent<=100.0)
 
    printf("\nGrade:A");
 
    else if(percent>80.0 && percent<=90.0)
 
      printf("\nGrade:B");
 
      else if(percent>60.0 && percent<=80.0)
 
            printf("\nGrade:C");
 
            else
 
              printf("\nGrade:D");
 
  
  
  
  
  
    return 0;
}
