const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void BinaryRep(int n)
{
    vector<bool> arr;
    if(n==0)
        cout<<0<<endl;
    while(n>0)
    {
       
        if(n&1)
            arr.push_back(1);
        else
        {
            arr.push_back(0);
        }
        n = n>>1;
    }

    for(int i=arr.size()-1;i>=0;i--)
        cout<<arr.at(i)<<" ";
    cout<<endl;
    
}

void Bin(unsigned n)
{
    if(n>1)
        Bin(n/2);
    
    cout << n%2;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    BinaryRep(n);
    Bin(n);

}