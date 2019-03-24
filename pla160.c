#include <stdio.h>
#include<conio.h>
void main() 
{
	int n,m,i,rem,b,a[20],c=0,c=0;
	scanf("%d %d",&n,&m);
	b=n|m;
	while(b)
	{
		rem=b%2;
		a[i]=rem;
		i++;
		c=c+1;
		b=b/2;
	}
	for(i=0;i<c;i++)
	{
		if(a[i]==1)
		{
			c=c+1;
		}
	}
	printf("%d",c);}
	
	
