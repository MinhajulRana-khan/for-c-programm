#include<stdio.h>
int main()
{

  int a,b;
  float div;
  scanf("%d%d",&a,&b);
  printf("%d+%d=%d\n",a,b,a+b);
  printf("%d-%d=%d\n",a,b,a-b);
  printf("%d*%d=%d\n",a,b,a*b);
  div=(float)a/b;
  printf("%d/%d=%0.2f\n",a,b,div);
  return 0;
}
