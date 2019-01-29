#include<stdio.h>
#include<conio.h>
int main()
{
    int a,r,s=0,m;
    clrscr();
    scanf("%d",&a);
    m=a;
    while(a)
    {
    r=a%10;
    s=s*10+r;
a=a/10;
    }

printf("%d",s);
if(s==m)
{
    printf("palindrome");
}
else 
{
    printf("not");
}
    return 0;
}
