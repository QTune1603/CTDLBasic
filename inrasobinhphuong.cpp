#include <stdio.h>
int main ()
{
    long long n;
    int a;
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        scanf("%lld",&n);
        printf("%d\n",n*n);
    }
    return 0;
}
