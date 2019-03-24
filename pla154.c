#include <stdio.h>
#include<conio.h>
void main()
{
	char a[30];
	int i,k;
	scanf("%s %d",&a,&k);
	for(i=k-1;a[i]!='\0';i=i+k)
  {
		if(a[i]>=97 && a[i]<=122)
    {
			[i]=a[i]-32;
      }
      }
	printf("%s",a);

}
