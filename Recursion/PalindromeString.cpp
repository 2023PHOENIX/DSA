  const int INT_MAX = 2147483647;
 const int INT_MIN = -2147483647;
 #include<bits/stdc++.h>
 using namespace std;
 typedef long long int ll;

bool Solve(string s,int start,int end)
{
  if(start>=end)
    return true;
  return (s[start]==s[end] and Solve(s,start+1,end-1))?true:false;
}

 int main()
 {
   string s;  cin>>s;

   cout<<Solve(s,0,s.length()-1);
 }
