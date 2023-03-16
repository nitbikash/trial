#include<stdio.h>

int main()
{
  int i, a,product=1;
int*x=&a;
printf("Enter a number to find out its factorial:");
scanf("%d",&a);
for(i=1;i<=*x;i++)
{
  product *=i;
}
printf("Factorial:%d",product);//justforfun
}
