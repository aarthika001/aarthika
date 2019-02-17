#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],i,m,f,c=0;
clrscr();
scanf("%d%d",&m,&f);
for(i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<m;i++)
{
if(arr[i]==f)
c=1;
}
if(c==1)
printf("yes");
else
printf("no");
getch();
}
