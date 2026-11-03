#include <stdio.h>
#include <math.h>

#define MAX_NUM 100000000

int isPrime[MAX_NUM/32];
int bitwiseIsPrime[100];

void Sieve(int n)
{
    int sqrtn = sqrt(n)+1;
    for(int i=3;i<=sqrtn;i+=2)
    {
        if(isPrime[i]==1)
        {
            for(int j=i*i;j<=n;j+=2*i)
            {
                isPrime[j]=0;
            }
        }
    }
    return;
}

int Check(int x)
{
    if((bitwiseIsPrime[x>>5] & (1<<(x & 31))) == 0)
        return 1;
    else
        return 0;
}

void Set(int x)
{
    bitwiseIsPrime[x>>5] |= (1<<(x & 31));
    return;
}

void BitwiseSieve(int n)
{
    int sqrtn = sqrt(n)+1;
    for(int i=3;i<=sqrtn;i+=2)
    {
        if(Check(i)==1)
        {
            for(int j=i*i;j<=n;j+=2*i)
            {
                Set(j);
            }
        }
    }
    return;
}


int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        isPrime[i] = 1;
    }
    BitwiseSieve(n);
    printf("2 ");
    for(int i=3;i<=n;i+=2)
    {
        if(Check(i) == 1)
            printf("%d ",i);
    }
}

