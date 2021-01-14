#include<bits/stdc++.h>

using namespace std;

int evenFactor(int n)
{
  vector<int> arr;
  for(int i=2;i<=n;i= i+2)
  {
    if(n%i==0)
      {
        arr.push_back(i);
      }
  }

  int sum{0};
  for(auto i : arr)
    sum += i;
    return sum;
}
int main()
{

  int n;  cin>>n;

  cout<<evenFactor(n);




}
