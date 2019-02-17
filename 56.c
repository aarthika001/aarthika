#include<stdio.h>
#include<conio.h>
void main()
{
char ch[10];
int j,len=0,c=0;
clrscr();
scanf("%s",&ch);
for(j=0;ch[j]!='\0';j++)
{
if(ch[j]!='.'&&ch[j]!=','&&ch[j]!='$'&&ch[j]!='*'&&ch[j]!='@')
{
if(ch[j]>=97&&ch[j]<=122||ch[j]>=65&&ch[j]<=90||ch[j]>=47&&ch[i]<=58)
c++;
}
}
for(j=0;ch[j]!='\0';j++)
{
if(ch[j]!='.'&&ch[j]!=','&&ch[j]!='$'&&ch[j]!='*'&&ch[j]!='@')
len++;
}
if(c==l)
printf("yes");
else
printf("no");
getch();
}
