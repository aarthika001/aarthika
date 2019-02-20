#include <stdio.h>
#include<conio.h>
void main()
{
int a1,a2,j,i,l=0;
scanf("%d%d",&a1,&a2);
for(i=a1;i<=a2;i++)
{
 for (int j = 1; j * j <= i; j++) 
{
            if (j * j == i) 
                l++; 
}}
printf("%d",l++);
getch();
}
