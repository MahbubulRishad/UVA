#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[200],a;
    int i;

    while(scanf("%s",&a) != EOF)
    {
        scanf("%[^\n]s",&ch);
        int cnt=1;

        for(i=0; ch[i] != '\0'; i++)
        {
            cout<<ch[i]<<" ";
            if(((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))
               && ((ch[i+1]<'a' || ch[i+1]>'z') || (ch[i+1]<'A' || ch[i+1]<'Z')))
            {
                cout<<"cjeck"<<endl;
                cnt++;
            }

        }
        printf("%d\n",cnt);
    }
    return 0;
}
