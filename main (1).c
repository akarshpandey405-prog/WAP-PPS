
#include <stdio.h>

int main()
{
   
   int physicaledu, english, physics,math,chemistry,sum ;
   printf("Enter marks of physicaledu=");
	scanf("%d",&physicaledu);
	printf("Enter marks of English=");
	scanf("%d",&english);
	printf("Enter marks of physics=");
	scanf("%d",&physics);
	printf("Enter marks of Math=");
	scanf("%d",&math);
	printf("Enter marks of Chemistry=");
	scanf("%d",&chemistry);
	
	sum=physicaledu+english+physics+math+chemistry;
	printf("Sum of marks=%d",sum);
	
	float per;
	per=sum/5;
	printf("Percentage of marks=%f",per);

    return 0;
}