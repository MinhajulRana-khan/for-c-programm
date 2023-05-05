#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int a[n];
for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
}
int even=0;
 int odd=0;
for(int i=1;i<=n;i++){

 if(a[i]%2==0)
    {
    even++;

 }

  else
   {

  odd++;

}

}
 printf("%d ",even);
 printf("%d",odd);
return 0;


}
