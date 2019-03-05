#include<stdio.h>
 void main() 
 {
  int a[10],N,K,i;
  scanf("%d%d",&N,&K);
  for(i=0;i<N;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<N-K;i++)
  {
      printf("%d ",a[i]);
  }
  
}
