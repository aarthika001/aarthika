#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,add=0,rem;
clrscr();
scanf("%d",&num);
while(num)
{
rem=num%10;
add=add+rem;
num=num/10;
}
printf("%d",add);
getch();
}
