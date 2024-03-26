#include<stdio.h>
void sum()  //declaration
{
	int a,b,c;
	printf("enter two numbers");   //definaton
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum is %d",c);
	return;
}
int main()    //call
{  
	sum();
  	return 0;
  
}
