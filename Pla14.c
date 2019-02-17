#include<stdio.h>
void main()
{
char a[10];int len,i;
scanf("%s%d",&a,&len);
for(i=0;i<len;i++)
{
if(a[i]=='a'||a[i]=='o'||a[i]=='u'||a[i]=='e'||a[i]=='i')
{
continue;
}
else
{
printf("%c",a[i]);
}
}
}
