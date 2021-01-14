const int INT_MAX=10001;

#include<bits/stdc++.h>


using namespace std;

// we study an efficient method to calculate the prime factorization
// using O(n)
// space and O(log n) time complexity with per-computation allowed.


int spf[INT_MAX];
// not corent code
void seive()
{
  spf[1] = 1;

  for(int i=2;i<INT_MAX;i++)
  {
    // mark every number is smallest prime factor
    spf[i] = i;
  }

  for(int i=2;i<INT_MAX;i+=2)
    spf[i] = 2; // for all possible even numbers spf is 2;

  for(int i=3;i<INT_MAX;i+=2)
  {
    if(spf[i]==i)
    {
      for(int j=i*i;i<INT_MAX;j+=i)
        {
          if(spf[j] == j)
              spf[j] = i;
        }
    }
  }
}

vector<int> getFactorization(int x)
{
  std::vector<int> v;
  while(x!=1)
  {
    v.push_back(x);
    x = x/spf[x];

  }

  return v;
}

int main()
{
  seive();

  int n;  cin>>n;
  auto v = getFactorization(n);
  cout<<"prime factorization of "<<n<<" :";
  for(auto &i : v)
    cout<<i<<" ";
}
