const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool IsOpposite(int a,int b)
{
    return (a^b < 0)?true:false;
    // return true when opposite sign are there
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;    cin>>a>>b;

    cout<<IsOpposite(a,b);


}
