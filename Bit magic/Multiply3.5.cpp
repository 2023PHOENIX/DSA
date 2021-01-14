#include<bits/stdc++.h>

using namespace std;

int Multiply_3(int n)
{
  return ((n>>1) + (n<<1) + n);
}
int main()
{
  int n;  cin>>n;

  // 9 / 2 + 9*2 + 9
  cout<<Multiply_3(n);
}
