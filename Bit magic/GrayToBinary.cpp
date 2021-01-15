const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;

#define INT_BITS 32
typedef long long int ll;


int GrayToBinary(int n)
{
  if(n==0)
    return 0;
  int grayCode{n};
  while(n>0)
  {
    n = n>>1;
    grayCode = n ^ grayCode;
  }

  return grayCode;
}

int main()
{
  int n;  cin>>n;

  cout<<GrayToBinary(n)<<endl;
}
