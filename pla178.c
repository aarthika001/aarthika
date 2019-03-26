#include <stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,j;
    clrscr();
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                a[i]=a[i]-32;
                a[j]=a[j]-32;
            }
            if(a[i]==a[j]+32)
            {
                a[j]=a[j]-32;
            }
        }
    }
    printf("%s",a);
    getch();
}
