#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int temp = 1;

    while(scanf("%c",&ch) != EOF)
    {
        if(ch=='"' && temp%2==1)
        {
            printf("``");
            temp++;

        }
        else if(ch=='"' && temp%2==0)
        {
            printf("''");
            temp++;

        }
        else
        {
            printf("%c",ch);
        }



    }
    return 0;
}


