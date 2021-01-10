#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b;
    scanf("%d\n",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d ",&a);
        scanf("%d",&b);

        if(a<b)
        {
            printf("<\n");
        }
        else if(a>b)
        {
            printf(">\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}
