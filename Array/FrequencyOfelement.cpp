const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void frequency(int *arr,int n)
{
    int i{0},j{0};

    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[j])
        {
            cout<<arr[j] <<" "<< i-j<<endl;
            j = i;
        }

    }
    if(arr[j]==arr[n-1])
        cout<<arr[j]<<" "<<n-j<<endl;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
        
    int n;  cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    frequency(arr,n);

}