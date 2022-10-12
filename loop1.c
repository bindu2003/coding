#include<stdio.h>
int main(){
int n,sum=0;
printf("enter any number:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
sum+=i;}
printf("the total sum is: %d",sum);
return 0;}
