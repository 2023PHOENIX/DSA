const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void func(int n)
{
  if(n==0)
    return;

  cout<<"Abhishek\n";

  func(n-1);
}

int main()
{
  int n;  cin>>n;
  func(n);
}
