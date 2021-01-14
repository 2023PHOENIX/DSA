const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int mod(int n,int x)
{
    return n & (x-1);
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;  cin>>n>>x;
    cout<<mod(n,x);

}