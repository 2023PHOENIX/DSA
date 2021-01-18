const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void Coefficient(int *arr,int n)
{
  int Imax{INT_MIN},Imin{INT_MAX};

  for(int i=0;i<n;i++)
  {
    Imax = max(Imax,arr[i]);

    Imin = min(Imin,arr[i]);
  }

  float Range = Imax - Imin;

  float CoefficientRange = Range/(Imax + Imin);


  cout<<Range<<endl;
  cout<<CoefficientRange<<endl;

}

int main()
{
  int n;  cin>>n;

  int *arr = new int[n];
  for(int i=0;i<n;i++)cin>>arr[i];

  Coefficient(arr,n);
}
