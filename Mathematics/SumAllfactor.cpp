#include<bits/stdc++.h>

using namespace std;

int sumOfFactor(int n)
{
  if(n==1)
    return 1;

  int sumAll{0};
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      if((n/i)==i)
        sumAll+=i;
      else
      {
        sumAll += (n/i) + i;
      }
    }
  }
  return sumAll + 1 + n;
}

int main()
{
  int n;  cin>>n;

  cout<<sumOfFactor(n);
}
