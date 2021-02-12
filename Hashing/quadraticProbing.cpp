const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> quadProbing(int *arr,int n,int hashSize)
{
    vector<int> hash(hashSize,-1);

    int hs = hashSize;

    for(int i=0;i<n;i++)
    {
        if(hs==0)
            return hash;
        int index = arr[i]%hashSize;

        int p = 1;
        while(hash[index]!=-1)
        {
            index = (arr[i] + p*p)%hashSize;
            p++;
        }
        hash[index] = arr[i];
        hs--;
    }

    return hash;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int hashSize;   cin>>hashSize;
    int n;  cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    auto v = quadProbing(arr,n,hashSize);

    for(auto i : v)
        cout<<i<<" "; 

}