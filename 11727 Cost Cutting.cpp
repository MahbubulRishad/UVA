#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);

    for(i=1; i<=n; i++)

    {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);

        if(a>b && b>c)
        {
            printf("Case %d: %d\n",i,b);
        }
        else if(b>a && a>c)
        {
            printf("Case %d: %d\n",i,a);
        }
        else if(a>c && c>b)
        {
            printf("Case %d: %d\n",i,c);
        }
        else if(b>c && c>a)
        {
            printf("Case %d: %d\n",i,c);
        }
        else if(a>b && c>a)
        {
            printf("Case %d: %d\n",i,a);
        }
        else if(b>a && c>b)
        {
            printf("Case %d: %d\n",i,b);
        }

    }
    return 0;
}
