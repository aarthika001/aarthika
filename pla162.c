#include <stdio.h>
#include<conio.h>
void main()
{
    char a[100][100];
    int i,j,c=0,l=0,n,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        l=0;
        for(j=0;a[i][j]!='\0';j++)
        {
            if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
            {
                l++;
            }
        }
        if(l>0)
        c++;
    }
if(c>=k)
printf("yes");
else
printf("no");
}
