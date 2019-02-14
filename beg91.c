#include <stdio.h>

int main()
{
    int a,b,c,surface,cube;
    scanf("%d %d %d",&a,&b,&c);
    surface=a*b*c;
    printf("%d\n",surface);
    cube=2*(a*b+b*c+c*a);
    printf("%d",cube);

    return 0;
}
