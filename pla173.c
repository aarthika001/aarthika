#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],b[100],c[100];
    int i,j,k;
    scanf("%[^\n]",&a);
   scanf("%[^\n]",&b);
    j=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[j])
        {
            a[i]='$';
            j++;
        }
    }
    k=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='$')
        {
            c[k]=a[i];
            k++;
        }
    }
    c[k]='\0';
    printf("%s",c);
}
