#include<stdio.h>
#include<conio.h>
void main()
{
char a[1000];
int i,l=0,c=0,n=0,m;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=0;i<l;i++)
{
if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')||(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'))
{
c++;
}
  else if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
        
{
if((a[i]!='a'||a[i]!='e'||a[i]!='i'||a[i]!='o'||a[i]!='u')||(a[i]!='A'||a[i]!='E'||a[i]!='I'||a[i]!='O'||a[i]!='U'))

        {

        n++;

        }

        }

    }

    m=c*n;

    printf("%d",m);
    
   

}
