  const int INT_MAX = 2147483647;
 const int INT_MIN = -2147483647;
 #include<bits/stdc++.h>
 using namespace std;
 typedef long long int ll;

 int countdigit(int n)
 {
   if(n==0 ||n==1)
    return 0;
  return  1 + countdigit(n/10);
 }

 int main()
 {
   int n; cin>>n;
   cout<<countdigit(n);
 }
