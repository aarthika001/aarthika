#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,f=0,k;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("yes");
break;
}
else
{
f++;
}
}
if(f==n)
printf("no");

}
