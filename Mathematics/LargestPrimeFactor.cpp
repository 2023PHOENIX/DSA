#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
      return false;
  }
  return true;
}

int largestPrimeFactor(int n)
{
  int ma{0};

  while(n%2==0)
  {
    ma = 2;
    n/=2;
  }

  for(int i=3;i<sqrt(n);i+=2)
  {
    if(n%i==0 and isPrime(i)==true)
    {

      while(n%i==0){
        ma = max(ma,i);
        n /= i;

      }
    }

  }


  if(n>2)
    return n;


  return ma;
}


int main()
{
  int n;  cin>>n;
  cout<<largestPrimeFactor(n);
}
