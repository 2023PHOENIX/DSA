const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool SegmentKey(int *arr,int n,int k,int x)
{
  for(int i=0;i<n;i+=k)
  {
    bool flag{false};
    for(int j=i;j<i+k && j<n;j++)
      {
        if(arr[j]==x)
        {
          flag = true;
          break;
        }
      }
      if(flag==false)
        return false;
  }
  return true;
}

int main()
{
  int n;  cin>>n;
  int *arr = new int[n];

  for(int i=0;i<n;i++)cin>>arr[i];

  
  int k,x;  cin>>k>>x;

  cout<<SegmentKey(arr,n,k,x);
}
