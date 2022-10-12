#include<stdio.h>
int main()
{
int n,r,temp,m=0;
printf("enter any number:\n");
scanf("%d",&n);
temp=n;
r=temp%10;
int last=r;
m=m*10+r;
do{
r=temp%10;
temp=temp/10;
m=m*10+r;}
while(temp!=0);
int first=r;

printf("last and first digits of %d are %d and %d \n",n,last,first);
printf("%d",m);
return 0;
}
