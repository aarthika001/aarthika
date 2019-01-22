#include<stdio.h>
#include<conio.h>
void main()
{
int a;
scanf("%d",&a);
if(a>0)
{
printf("positive");
}
else if(a<0)
{
printf("negative");
}
else
{
printf("default");
}
getch();
}
