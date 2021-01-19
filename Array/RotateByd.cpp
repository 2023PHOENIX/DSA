const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

 void rotateByone(int *arr,int n)
 {
   int temp = arr[0];

   for(int i=0;i<n;i++)
   {
     arr[i] = arr[i+1];
   }

   arr[n-1] = temp;
 }

void rotateByd(int *arr,int n,int d)
{
  for(int i=0;i<d;i++)
  {
    rotateByone(arr,n);
  }
}
int main()
{
  int n,d;  cin>>n>>d;

  int *arr = new int[n];

  for(int i=0;i<n;i++)cin>>arr[i];

  rotateByd(arr,n,d);

  // rotateByone(arr,n);
  for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
