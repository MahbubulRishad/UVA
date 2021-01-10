#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,a,b,c,p;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&p);
        int temp=0;

        for(j=1; j<=p; j++)
        {

            scanf("%d",&a);
            scanf("%d",&b);
            scanf("%d",&c);

            int k = a*c;

            temp=temp+k;
        }
        printf("%d\n",temp);
    }
    return 0;
}
