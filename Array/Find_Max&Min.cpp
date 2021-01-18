const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void maxMin(int *arr,int n)
 {
   int Imax{INT_MIN},Imin{INT_MAX};

   for(int i=0;i<n;i++)
   {
     Imax = max(arr[i],Imax);
     Imin = min(arr[i],Imin);
   }
   cout<<Imax << " "<< Imin<<endl;
 }

int main()
{
  int n;  cin>>n;
  int *arr = new int[n];
  for(int i=0;i<n;i++)cin>>arr[i];

  maxMin(arr,n);
}
