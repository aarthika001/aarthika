#include<stdio.h>
#include<conio.h>
void main()
{
long int b,h=0,base=1,rem;
clrscr();
scanf("%ld",&b);
while(b)
{
rem=b%16;
h=h+rem*base;
b=b/16;
base=base*2;
}
printf("%ld",h);
getch();
}
