#include<bits/stdc++.h>

using namespace std;

// polite Number
// no of way consecutive int sum can make that Number
// ap * bq * c

// (a+1)(b+1)-1

int countOddPowers(int n)
{
  int result = 1;

  while(n%2==0)
    n /= 2;

  for(int i=3;i<=sqrt(n); i+=2)
  {
    int divCount = 0;

    while(n%i==0)
    {
      n /= i;
      divCount++;
    }

    result *= divCount +1;
  }

  if(n>2)
    result *= 2;

  return result;
}

int politness(int n)
{
  return countOddPowers(n) -1;
}

int main()
{
  int n;  cin>>n;
  cout<<politness(n)<<"\n";
}
