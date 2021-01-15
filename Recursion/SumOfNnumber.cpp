  const int INT_MAX = 2147483647;
 const int INT_MIN = -2147483647;
 #include<bits/stdc++.h>
 using namespace std;
 typedef long long int ll;

 int SumRec(int n)
 {
   if(n==0)
    return 0;
  return n + SumRec(n-1);
 }

 int main()
 {
   int n; cin>>n;
   cout<<SumRec(n);


   cout<<endl;
   cout<<n*(n+1)/2;
 }
