#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10],c[10];
int l=0,n=0,i,j,k;
scnaf("%s%s",&a,&b);
for(i=0;a[i]!='\0';i++)
{
l++;
}
printf("%d",l);
for(j=0;b[j]!='\0';j++)
{
n++;
}
printf("%d",n);
m=l+n;
k=0;
for(i=0;i<l;i++)
{
c[k]=a[i];
k++;
}
for(j=0;j<n;j++)
{
c[k]=b[j];
k++'
}
for(k=0;k<m;k++)
{
printf("%c",c[k]);
}
getch();
}
