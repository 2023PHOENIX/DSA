#include<bits/stdc++.h>

using namespace std;

bool * Eratosthenes(int n)
{

  bool *Isprime  = new bool[n+1];

  for(int i=1;i<=n;i++)
    Isprime[i] = true;


  for(int i=2;i<=sqrt(n);i++)
  {
    if(Isprime[i]==true)
    {
      for(int j=i*2;j<=n;j+=i)
      {
        Isprime[j] = false;
      }

    }
  }
  return Isprime;
}


int main()
{
  int n;  cin>>n;

  auto arr = Eratosthenes(n);
  for(int i=0;i<=n;i++)
    if(arr[i]==true)
      cout<<i<<" ";
}
