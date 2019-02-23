#include<stdio.h>
void main()
{
int a1,a2,n,i; 
scanf("%d%d",&a1,&a2); 
if(a1<a2)  
n=a2;  
else 
n=a1; 
while(1) 
{ 
if(n%a2==0 && n%a1==0) 
{ 
printf("%d",n); 
break; 
} 
else 
{ 
n++; 
}
} 
}
