const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void MoveAllneg(int *arr,int n)
{
  int i{0},j{0};

  while(i<n)
  {
    if(arr[i]<0)
    {
      swap(arr[j],arr[i]);
      j++;
    }
    i++;
  }
}
int main()
{
  int n;  cin>>n;

  int *arr = new int[n];

  for(int i=0;i<n;i++)cin>>arr[i];

  MoveAllneg(arr,n);

   // 2 4 -3 -2 0

   for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
