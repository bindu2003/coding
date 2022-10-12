#include<stdio.h>
int main(){
int m,n=0,r,temp;
printf("enter any number:\n");
scanf("%d",&m);
temp=m;
while(temp!=0)
{
r=temp%10;
n=n*10+r;
temp=temp/10;}

if(n==m)
printf("yes it is a palindrome");
else
printf("not a palindrome");
return 0;
}
