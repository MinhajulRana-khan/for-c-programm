#include<stdio.h>
int main()
{
    int taka;
    scanf("%d",&taka);
    if(taka>1000)
    {
        printf("I will buy Punjabi\n");
        if(taka>=1600)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }




    else{
        printf("Bad luck!\n");
    }


    return 0;

}
