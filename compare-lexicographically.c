#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],b[100];
   scanf("%s%s",a,b);
   int X=strcmp(a,b);
   if(X<0){
    printf("%s",a);
   }

    if(X>0){
    printf("%s",b);
   }
    if(X==0){
    printf("%s",a);
   }

    return 0;

}
