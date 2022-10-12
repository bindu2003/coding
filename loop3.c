#include<stdio.h>
int main(){
int n,r,sum=0,temp,product=1,m=0;
printf("enter any number");
scanf("%d",&temp);
n=temp;
while(n!=0){
r=n%10;
sum+=r;
product*=r;
n=n/10;
m=m*10+r;
}
if(m==temp)
printf("it is is a palindrome");
else
printf("not a palindrome\n");
printf("the sum and product of the digits of %d are  %d and %d ",temp,sum,product);
return 0;}

