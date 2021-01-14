#include<bits/stdc++.h>

using namespace std;

int FindMin(int N)
{
  int  n= N;
  int sum = 0;

  for(int i=2;i<=sqrt(n);i++)
  {
    while(n%i==0)
    {
      n = n/i;
      sum += i;
    }

  }
  if(n==N)
  {
    sum += 1;
  }
  sum += n;

  return sum;
}
int main()
{
  int t;  cin>>t;

  while(t--)
  {
    int n;  cin>>n;
    cout<<FindMin(n)<<"\n";
  }
}
