const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int fibonacci(int n)
{
  if(n==0 or n==1)
    return n;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
  int n;  cin>>n;
  cout<<fibonacci(n);
}
