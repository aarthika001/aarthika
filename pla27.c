#include <stdio.h>

int main()
{
	char a[10];
	int i;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]>='a'&&a[i]<='z')
	    {
	        a[i]=a[i]-32;
	    }
	    else
	    {
	        a[i]=a[i]+32;
	    }
	
	    printf("%c",a[i]);
	}
	
    return 0;
}
