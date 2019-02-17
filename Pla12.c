#include<stdio.h>

void main()
{
int a,r,s=0;

scanf("%d",&a);
while(a)
{
r=a%10;
s=s+r*r;
a=a/10;
}
printf("%d",s);

}
