const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int KthSmallest(int *arr,int n,int k)
{
   sort(arr,arr+n);

   return arr[k-1];
}

int main()
{
   int n; cin>>n;
   int *arr = new int[n];
   for(int i=0;i<n;i++)cin>>arr[i];

   int k; cin>>k;
   cout<<KthSmallest(arr,n,k);
}
