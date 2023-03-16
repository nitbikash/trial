#include<stdio.h>

void fun(int*x,int*y)
{
   int temp;
  temp=*x;
*x=*y;
*y=temp;
printf("The numbers after swapping:\n %d\n%d",*x,*y);
}

int main()
{
  int a,d;
printf("Enter two numbers to swap:\n");
scanf("%d %d",&a,&d);
fun(&a,&d);
return 0;//just for fun
}