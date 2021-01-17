  const int INT_MAX = 2147483647;
 const int INT_MIN = -2147483647;
 #include<bits/stdc++.h>
 using namespace std;
 typedef long long int ll;

 int digitalRoots(int n)
 {
   if(n<10)
    return n;

    return digitalRoots(n%10 + digitalRoots(n/10));
 }

 int main()
 {
   int n; cin>>n;

   cout<<digitalRoots(n);
 }
