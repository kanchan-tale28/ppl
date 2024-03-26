#include<stdio.h>
struct complex
{
	int real, img;
};
int main()
{
	int choice;
	
	int a_real, b_real , a_img, b_img, c_real , c_img;
	printf("enter a and b where a+ib is first complex equation\n");
	scanf("%d%d",&a_real,&a_img);
	printf("the first complex no is %d + i%d\n",a_real,a_img);
	printf("enter c and d where c+id is first complex equation\n");
	scanf("%d%d",&b_real,&b_img);
	printf("the second complex no is %d + i%d\n",b_real,b_img);
	printf("enter your choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
			c_real= a_real + b_real;
			c_img= a_img + b_img;
			printf("the sum of complex numbers is %d + i%d\n",c_real,c_img);
			break;
		
		case 2: 
			c_real= a_real*b_real - a_img*b_img;
			c_img= a_img*b_real - a_real*b_img;
			printf("the multiplication of complex numbers is : %d + i%d",c_real,c_img);
			break;
		
	}
	return 0;
}
