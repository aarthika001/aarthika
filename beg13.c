#include <stdio.h>
#inclue<conio.h>
void main()
{
int n,i,f=0;
clrscr();
scanf("%d",&n);
for(i=0;i<=n/2;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(f==0)
printf("prime no");
else
printf("not");
getch();
}
