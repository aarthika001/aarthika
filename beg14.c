#include <stdio.h>
#include<conio.h>
int main()
{
int a,b,i;
clrscr();
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
    if(i%2!=0)
    {
        printf("%d",i);
    }
}
getch();
    return 0;
}
