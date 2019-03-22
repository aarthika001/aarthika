#include<stdio.h>
#include<conio.h>
void main()
{
    char a[1000],b[1000],c[1000];
    int i,j,k=0,n=0,l=0,m,s=0;
   scanf("%[^\n]",&a);
    scanf("%s",&b);
    for(i=0;b[i]!='\0';i++){
    m++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
           c[k]=a[i]; 
           k++;
        }
        if(a[i]==' ')
        {
            s++;
            for(j=0;j<k;j++)
            {
                if(c[j]==b[l])
                {
                    n++;
                }
                l++;
            }
            for(j=0;j<k;j++)
            {
                c[j]='\0';
                n=0;
                l=0;
            }
        }
    }
    n=0;
    l=0;
        for(j=0;j<k;j++)
            {
                if(c[j]==b[l])
                {
                    n++;
                    l++;
                }
            }
            if(m==n)
            {
                s++;
            }
            
    printf("%d",s);
    getch();
}
