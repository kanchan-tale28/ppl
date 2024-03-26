#include<stdio.h>
int main()
{ 
 	int a[10],i,size;
 	int even_sum=0 , odd_sum=0;
 	
 	printf("enter the size of array:");
 	scanf("%d",&size);
 	
 	printf("enter array elements");
 	for(i=0;i<size;i++)
 	{ 
 		scanf("%d",&a[i]);
	 }
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
			{
				even_sum=even_sum+a[i];
			}
		else
		{	
			odd_sum=odd_sum+a[i];
		}
	}
	
	printf("the sum of even elements is:%d\n",even_sum);
	printf("the sum of odd elements is :%d",odd_sum);
	
	return 0;
	
}
