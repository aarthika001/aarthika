#include <stdio.h>
#include<conio.h>
void main() 
{
char a[30];
	int n,i,j,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
  {
		scanf("%s\n",&a);
  }
	for(i=0;i<n;i++)
	{
		for(j=0;a[j]!='\0';j++)
		{ 
		if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u'||a[j]=='A'||a[j]=='E'||a[j]=='I'||a[j]=='O'||a[j]=='U')
			{
			f=1;
				break;
			}
		}
		if(f==0)
		break;
	
	}
	if(f==0)
		printf("no");

	else
		printf("yes");
}
