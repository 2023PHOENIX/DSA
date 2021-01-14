const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int RightMostBit(int n)
{
    if(n==0)
        return -1;
    int c{1};
    while(n>0)
    {
        if(n&1)
            break;

        c++;
        n = n>>1;

    }

    return c;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    cout << RightMostBit(n);
}