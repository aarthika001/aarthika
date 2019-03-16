#include <stdio.h>
#include<conoi.h>
void main() 
{
	int n,a[100],i,r=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
         r=r|a[i];
     
     }
	printf("%d",r);
	getch();
}
