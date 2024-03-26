#include<stdio.h>
int main()
{ 
 int a,b,temp;
 printf("enter two numbers:");
 scanf("%d%d",&a,&b);
 printf("before swapping (a,b) is (%d,%d)",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("after swapping (a,b) is (%d,%d)",a,b);
 return 0;
}
