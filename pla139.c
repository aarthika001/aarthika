#include <stdio.h>
#include<conio.h>
void main() 
{
	int n,i,j,c=0,a[1000],rem,l=0;
	scanf("%d",&n);
	while(n)
	{
	    rem=n%2;
		a[i]=rem;
		i++;
    c++;
		n=n/2;
	}
	j=i;
	for(i=0;i<j;i++)
	{
		if(a[i]==1)
		{
			l++;
		}
	}
	printf("%d",l);

	return 0;
}
