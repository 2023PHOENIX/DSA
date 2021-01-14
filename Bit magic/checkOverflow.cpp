const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isOverflow(int *result,int a,int b)
{
    *result = a+b;

    if(a>0 and b>0  and *result<0)
        return 1;
    if(a<0  and b<0 and *result>0)
        return 1;
    return  0;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;    cin>>a>>b;
    
    int *result = new int[sizeof(int)];
    
    cout<<isOverflow(result,a,b)<<endl;
    
    cout<<*result<<endl;
}