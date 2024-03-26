#include<stdio.h>
int main()
{ 
	int maths,english,chemistry,physics,biology;
	float total_marks,percentage;
	
	// taking inputfrom user
	printf("enter the marks in maths:");
	scanf("%d",&maths);
	printf("enter the marks in english:");
	scanf("%d",&english);
	printf("enter the marks in chemistry:");
	scanf("%d",&chemistry);
	printf("enter the marks in physics:");
	scanf("%d",&physics);
	printf("enter the marks in biology:");
	scanf("%d",&biology);
	
	total_marks=maths+english+chemistry+physics+biology;
	percentage= (total_marks/500) *100;
	
	
	if(percentage>75)
		printf("grade : distinction");
	else if(percentage<75 && percentage>60)
		printf("grade: first division");
	else if(percentage>=50 && percentage<60)
		printf("grade: second division");
	else if(percentage>=40 && percentage<50)
		printf("grade: third division");
	else
		printf("fail");
	
	return 0;
}
