# display-odd-number
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
if(n%2==1)
{
printf("the given number is  an odd number");
}
else
{
printf("the given number is not an odd number");
}
return0;
}
