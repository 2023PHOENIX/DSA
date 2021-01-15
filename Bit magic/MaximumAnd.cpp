const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(int *arr,int n)
{
    int Imax{INT_MIN};
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            Imax = max(Imax,(arr[i]&arr[j]));
        }
    }
    return Imax;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    
        int n;  cin>>n;


        int *arr = new int[n];
    
        for(int i=0;i<n;i++)cin>>arr[i];

        cout<<solve(arr,n)<<endl;
    
}