  const int INT_MAX = 2147483647;
 const int INT_MIN = -2147483647;
 #include<bits/stdc++.h>
 using namespace std;
 typedef long long int ll;

int digitsum(int n)
{
  if(n==0)
    return 0;
  return n%10 + digitsum(n/10);

}

 int main()
 {
   int n; cin>>n;
   cout<<digitsum(n);
 }
