#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100],temp;
int i,k,j,m;
scanf("%[^\n]s",&a);
k=0;
for(i=0;a[i]!='\0';i++)
{
 if(a[i]!=' ')
 {
 b[k]=a[i];
 k++;
 }
 else
 {
 b[k]='\0';
 for(j=0;j<k;j++)
 {
   for(m=j+1;m<k;m++)
   {
    if(b[j]>b[m])
    {
     temp=b[j];
     b[j]=b[m];
     b[m]=temp;
    }
   }
 }
 for(j=0;j<k;j++)
 {
  printf("%c",b[j]);
 }
 k=0;
 printf(" ");
}
}
}
