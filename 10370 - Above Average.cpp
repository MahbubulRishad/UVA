#include<bits/stdc++.h>
using namespace std;

int main()
{
    int C,N,i,j,num[10000],sum;
    double avg,pr,cnt;
    scanf("%d",&C);

    for(i=1;i<=C;i++)
    {
        scanf("%d",&N);
        sum=0;

        for(j=0;j<N;j++)
        {
            scanf("%d",&num[j]);
            sum= sum+num[j];
        }
        avg = sum/N;
        cnt=0;

        for(j=0;j<N;j++)
        {
            if(num[j]>avg)
            {
                cnt++;
            }

        }
        pr = (cnt * 100) / N;
        printf("%.3lf%%\n",pr);
    }
    return 0;
}
