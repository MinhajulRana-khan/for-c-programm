#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=i;j++){
                //k=1;
            printf("%c",i+64);
        }
        //k=k+2;
        printf("\n");

    }
    return 0;

}
