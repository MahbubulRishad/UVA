#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    char c;

    printf("Enter the initial position: ");
    scanf("%d %d",&x,&y);

    while(1)
    {
        scanf("%c",&c);

        if(c=='S')
        {
            break;
        }
        else if (c=='U')
        {
            x--;
        }
        else if (c=='D')
        {
            x++;
        }
        else if(c=='R')
        {
            y++;
        }
        else if(c=='L')
        {
            y--;
        }
    }
    printf("Final position : %d,%d",x,y);

    return 0;
}

//#include <stdio.h>
//int main()
//{
//    int x, y;
//    char c;
//    printf("Please enter the initial position: ");
//    scanf("%d %d", &x, &y);
//    while (1)
//    {
//        scanf("%c", &c);
//        if (c == 'S')
//        {
//            break;
//        }
//        else if (c == 'U')
//        {
//            x;
//        }
//        else if (c == 'D')
//        {
//            x++;
//        }
//        else if (c == 'R')
//        {
//            y++;
//        }
//        else if (c == 'L')
//        {
//            y;
//        }
//    }
//    printf("Final position of the robot is: %d, %d\n", x, y);
//    return 0;
//}
