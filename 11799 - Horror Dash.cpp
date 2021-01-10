#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,c[10000],Max[1000],i,j;

    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        Max[i]=0;

        for(j=0;j<N;j++)
        {
            scanf("%d",&c[j]);

            if(c[j]>Max[i])
            {
                Max[i]=c[j];
            }
        }
    }

    for(i=0;i<T;i++)
    {
        printf("Case %d: %d\n",(i+1),Max[i]);
    }
    return 0;
}
