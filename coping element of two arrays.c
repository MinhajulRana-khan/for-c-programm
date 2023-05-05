#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int one [n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&one[i]);
    }
     int m;
    scanf("%d",&m);
    int two [m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&two [i]);
    }
   int three [n+m];
    for(int i=0;i<n;i++)
    {
        three[i]=one[i];
    }
    int i=n;
    for(int j=0;j<m;j++)
    {
        three[i]=two[j];
        i++;
            }
    for(int i=0;i<n+m;i++)
    {
        printf("%d ",three[i]);
    }
return 0;
}

