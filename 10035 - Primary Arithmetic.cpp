#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b;

    while(scanf("%lld%lld",&a,&b) == 2)
    {
        long long int i,A,A1,B,B1,c;
        long long int cnt,carry;
        if(a == 0 && b ==0)
            break;

        cnt=0;
        carry=0;


        for (i=0;; i++)
        {
            if(a == 0 && b ==0)
            {
              break;
            }


            A=a%10;
            a=a/10;
            B=b%10;
            b=b/10;
            c=A+B+carry;

            if(c>9)
            {
                cnt++;
                carry=1;
            }
            else
            {
                carry=0;
            }
        }

        if(cnt==0)
        {
            printf("No carry operation.\n");
        }
        else if(cnt>1)
        {
            printf("%lld carry operations.\n",cnt);
        }
        else if(cnt==1)
        {
            printf("%lld carry operation.\n",cnt);
        }


    }




    return 0;
}
