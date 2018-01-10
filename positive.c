#include<stdio.h>
int main()
{
int num;
printf("Enter the value:");
scanf("%d",&num);
if(num>0)
printf("The value is positive");
else if(num<0)
printf("The value is negative");
else
printf("The value is zero");
return 0;
}
