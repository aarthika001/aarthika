#include <stdio.h>

int main()
{
char a[10];
int b1=0,b2=0,c1=0,c2=0,a1=0,a2=0,i;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]=='{')
    a1++;
    else if(a[i]=='[')
    b1++;
    else if(a[i]=='(')
    c1++;
    else if(a[i]=='}')
    a2++;
    else if(a[i]==']')
    b2++;
    else 
    c2++;
}
if(a1==a2&&b1==b2&&c1==c2)
printf("yes");
else 
printf("no");
    return 0;
}
