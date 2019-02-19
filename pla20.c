#include <stdio.h>
#include <conio.h>
void main()
{
	char a[50];
	int i,l=0;
	scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
  l++;
  }
	for(i=0;i<l;i++)
	{
		a[i]=a[i]+3;
		if(a[i]=='X')
		a[i]='A';
		if(a[i]=='Y')
		a[i]='B';
		if(a[i]=='Z')
		a[i]='C';
	}
	printf("%s",a);

    return 0;
}
