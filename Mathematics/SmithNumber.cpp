#include<bits/stdc++.h>

using namespace std;

int Cdigit(int n)
{

  return floor(log10(n) + 1);
}

bool isPrime(int n)
{
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
      return false;

  }
  return true;
}

int isSmith(int N)
{
    vector<int> A;
    bool flag{false};
    int n = N;
    while(n%2==0)
    {
      flag = true;
      n /= 2;
      A.push_back(2);
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
      if(isPrime(i))
      {
        while(n%i==0)
        {
          n /= i;
          flag = true;
          if(Cdigit(i)>1)
          {
            while(i>0)
            {
              int rem = i%10;
              A.push_back(rem);
              i = i/10;
            }
          }
          else
          {
            A.push_back(i);
          }

        }
      }
    }

    if(n>2)
    {
        if(Cdigit(n)>1)
          {
            while(n>0)
            {
              int rem = n%10;
              A.push_back(rem);
              n = n/10;
            }
          }
         else
         {
             A.push_back(n);
         }

    }

  int sum = 0;
  if(flag){
  for(auto &i : A)
      sum += i;
}

  return sum;



}
int main()
{
  int n;  cin>>n;
  int a = isSmith(n);
    int b{0};
    while(n>0)
    {
        int rem = n%10;
        n = n/10;

        b += rem;
    }

    if(a==b)
        cout<<"True\n";
    else
        cout<<"False\n";
}
