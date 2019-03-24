#include<stdio.h>
#include<conio.h>
void main()
{
    char a[1000];
    int n,i,j,k=0;
    clrscr();
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                k++;
                a[j]='\0';
            }
        }
        if(a[i]!='\0')
        printf("%c%d",a[i],k);
    }
    getch();
}
