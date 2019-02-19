#include <stdio.h>
int main()
{
	char a[50];
	int i;
	scanf("%[^\n]",&a);
	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]==' ')
	    {
	        continue;
	    }
	    else
	    {
	        printf("%c",a[i]);
	    }
	}
    return 0;
}
