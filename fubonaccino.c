#include <stdio.h>
int main()
{  
  int a,b,n,sum,i;
  printf("enter index number");
  scanf("%d",&n);
  a=1;
  b=1;
  sum=1;
for(i=1;i<=n-2;i++){
	sum=a+b;
	a=b;
	b=sum;
	}
	printf("the %dth no is %d",n,sum);
	return 0;
}

//series is 1 1 2 3 5 8 13 21 34....
//          1 2 3 4 5 6 7  8th 9th...
