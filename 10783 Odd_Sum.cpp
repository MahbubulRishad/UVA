#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,i,j;
    int a,b;

    scanf("%d",&test);

    for(i=1;i<=test;i++)
    {
        scanf("%d%d",&a,&b);
       int sum=0;

        for(j=a;j<=b;j++)
        {
            if(j%2==1)
            {
               sum = sum + j;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
