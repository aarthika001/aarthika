#include <stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a<b+c)&&(b<c+a)&&(c<a+b))
    {
    printf("yes");
    }
    else
    {
    printf("no");
    }
}
