#include<stdio.h>
#include<conio.h>
void main()
{
    char a[1000],b[100],s[100];
    int i,n,j,l,c=1,max,k=0,p;
    scanf("%[^\n]",&a);
    for(i=0;a[i]!='\0';i++)
    {
    l++;
    }
    for(i=0;i<l;i++)
    {
        c=1;
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='\0';
            }
        }
        
        if(a[i]!='\0')
        
        {
            b[k]=a[i];
            s[k]=c;
            k++;
            if(max<=c)
            {
                max=c;
            }
        }
    }
    printf("%d ",max);
    for(i=0;i<k;i++)
    {
        if(s[i]==max)
        {
            printf("%c",b[i]);
        }
    }
    
    return 0;
}
