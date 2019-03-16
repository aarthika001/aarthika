#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,c,a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
  {
			scanf("%d",&a[i]);
}
c=a[0];
	for(i=0;i<n;i++)
  {
		c=c&a[i];
	printf("%d",c);
  }
}
