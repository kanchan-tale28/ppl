#include<stdio.h>
void vol();
int main()
{ vol();
return 0;
}
 void vol()
{ int v,s;
printf("enter the side");
scanf("%d",&s);
v=s*s*s;
printf("vol:%d",v);
}
