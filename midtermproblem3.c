#include<stdio.h>
int main()
{
    int m,n,d;
    scanf("%d%d%d", &m, &n, &d);

    int days;
    days=(m*d)/n;
    printf("%d\n",days);
    return 0;
}
