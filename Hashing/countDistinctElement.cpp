const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int countDistinct(int *arr,int n)
{
    // unordered_set<int> s;
    // for(int i=0;i<n;i++)
    //     s.insert(arr[i]);
    unordered_set<int> s(arr,arr+n);

    return s.size();
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<countDistinct(arr,n)<<endl;
}