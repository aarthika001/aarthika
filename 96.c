#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,a,j,diff=0,k1=0;
clrscr();
scanf("%d%d%d",&n,&m,&a);
for(j=0;j<a;j++)
{
diff=n+j*m;
k1=k1+diff;
}
printf("%d ",k1);
getch();
}
