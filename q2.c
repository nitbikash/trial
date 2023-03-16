#include<stdio.h>

int main()
{
int a,b;
int*x=&a;
int*y=&b;
printf("Enter two numbers :");
scanf("%d %d",&a,&b);
if(*x>*y)
{
printf("First number is greater than second");
}
else
{
printf("Second number is greater than first");
}
return 0;
}