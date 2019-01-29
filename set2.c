#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
scanf("%s",&a);
printf("%s",a);
if(a=='sunday')
printf("yes");
else if(a=="monday")
printf("no");
else if(a=="tuesday")
printf("no");
else if(a=="wednesday")
printf("no");
else if(a=="thrusday")
printf("no");
else if(a=="friday")
printf("no");
else if(a=="saturday")
printf("no");
else
printf("default");
getch();
}
