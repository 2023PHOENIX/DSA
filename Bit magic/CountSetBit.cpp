const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int table[256];


void Initialise()
{
    table[0] = 0;
    for(int i=0;i<256;i++)
        table[i] = table[i/2] + (i&1);
}

int countBit(int n){

    int res = table[ n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    n = n>>8;
    res = res + table[ n & 0xff];
    n = n>>8;
    res = res + table[ n & 0xff];

    return res;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Initialise();
    int n;  cin>>n;

    cout<<countBit(n)<<endl;

}