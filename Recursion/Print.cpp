  const int INT_MAX = 2147483647;
 const int INT_MIN = -2147483647;
 #include<bits/stdc++.h>
 using namespace std;
 typedef long long int ll;


 void print(int n)
 {
   if(n==0)
    return;
  print(n-1);
  cout<<n<<" ";
 }
 int main()
 {
   int n; cin>>n;
   print(n);
 }
