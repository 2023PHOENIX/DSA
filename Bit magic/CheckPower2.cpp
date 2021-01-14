const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


bool power2(int n)
{
    if(n==0)
        return false;
   while(n!=1)
   {
       if(n%2!=0)
            return false;
        n = n/2;
   }
   return true;
}

int Log2n(unsigned int n)
{
    if(power2(n)==true)
        return (n>1)? 1 + log2(n):0;
    return -1;
}


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin>>n;
    cout<<Log2n(n);

}