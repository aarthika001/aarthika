#include<stdio.h>
#include<conio.h>
void main()
{
char a[1000],b[1000],c[1000];
int i,j,l=0,m,k=0,d=0;
scanf("%s %s",&a,&b);
for(j=0;b[j]!='\0';j++)
{
l++;
c[k]=b[j];
k++;
}
for(i=0;a[i]!='\0';i++)
{
d++;
c[k]=a[i];
k++;
}
m=l+d;
if(k==26)
printf("complementary");
else
printf("non-complementary");
}
