#include<stdio.h>
#include<conio.h>
void main()
{
long int a,dig=0;
clrscr();

scanf("%ld",&a);
while(a)
{
a=a/10;
dig++;
}
printf("%ld",dig);
getch();
}
