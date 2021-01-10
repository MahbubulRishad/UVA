#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,d=0,res=0,d1,res1=0;
    while(scanf("%lld",&n) ==1)
    {
        if(n==0)
        {
            break;
        }


        while(n>9)
        {
            d=(n%10);
            n=(n/10);
            n=(n+d);

        }


        printf("%lld\n",n);

    }

    return 0;
}

