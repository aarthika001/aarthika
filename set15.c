#include <stdio.h>
#include<conio.h>
int main()
{
char a;
scanf("%c",&a);
if(a>='a'&&a<='z'||a>='A'&&a<='Z')
{
printf("alphabet");
}
else
{
    printf("no");
}

getch();
return 0;
}
