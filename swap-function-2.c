#include<stdio.h>
void swap(int*a, int*b)
{ 
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("After swapping in function (a,b) is (%d,%d)\n",*a,*b);
}
int main()
{
	int a=5,b=7;
	printf("Before swapping in main (a,b) is :(%d,%d)\n",a,b);
	swap(&a,&b);
	printf("After swapping in main (a,b) is : (%d,%d)",a,b);
	return 0;
}
