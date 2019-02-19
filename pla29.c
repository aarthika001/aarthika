#include <stdio.h>

int main()
{
int a,b,j,i,cnt=0;
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
 for (int j = 1; j * j <= i; j++) 
{
            if (j * j == i) 
                cnt++; 
}}
printf("%d",cnt++);
    return 0;
}
