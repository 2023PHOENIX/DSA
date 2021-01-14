#include<bits/stdc++.h>

using namespace std;

int Addone(int n)
{
   return (-(~n));
}
int main()
{
  int n;  cin>>n;

  cout<<Addone(n);
}
