#include<stdio.h>
int main()
{
    int taka;
    scanf("%d",&taka);
    if(taka>1000)
    {
        printf("punjabi\n");
        if(taka>=1500)
        {
            printf("pair\n");
            printf("allisa will buy a pair\n");
        }
    }




    else{
        printf("bad luck!\n");
    }


    return 0;

}
