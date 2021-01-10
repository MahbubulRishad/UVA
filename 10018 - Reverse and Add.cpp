#include<stdio.h>

long long int Reverse(long long int b)
{
    long long int x,r,y=0;
    x=b;

    while(x!=0)
    {
        r = x % 10;
        y = (10 * y)+r;
        x = x/10;
    }
    return y;
}
int main()
{
    long long int number,r_number,b,add,r_add,c,n,i,p,cnt;
    while(scanf("%lld",&n)!=EOF)
    {
        for (i=1; i<=n; i++)
        {
            scanf("%lld",&number);
            cnt=0;
            b=number;

            r_number=Reverse(b);
            c=r_number;


            if(b == c)
            {
                printf("0 %lld\n",b);
            }
            else
            {
                while(b!=c)
                {
                    b=(b+c);
                    c=Reverse(b);
                    cnt++;
                }
                printf("%lld %lld\n",cnt,b);
            }
        }
        return 0;
    }
}


