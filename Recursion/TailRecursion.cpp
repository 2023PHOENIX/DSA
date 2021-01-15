const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int Factorial(int n)
{
  if(n==0)
    return 1;

  return Factorial(n-1)*n;
}

int TailRecursion(int n,int k)
{
  if(n==0)
    return k;

  TailRecursion(n-1,k*n);     // when we call for TailRecursion(4)
  // (4,1) -> (3,4) -> (2,12) -> (1,24) -> (0) -> it will return 24 as k





}

int main()
{
  int n;  cin>>n;

  // cout<<Factorial(n);
  cout<<TailRecursion(n,1);
}
