#include<stdio.h>
int main(){
char c;
printf("enter any character:\n");
scanf("%c",&c);
int value=c;
printf("%d\n",value);
if((value>=65&&value<=90) || (value>=97&&value<=122))
{printf("alphabet");}
else
{printf("not a alphabet");}
return 0;
}

