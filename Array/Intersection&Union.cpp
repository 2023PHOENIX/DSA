const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void Intersection(int *arr,int n,int *brr,int m)
{

  int i{0},j{0};

  while(i<n and j<m)
  {
    if(arr[i]>brr[j])
      {j++;}
    else if(arr[i]<brr[j])
    {  i++; }
    else
    {
      cout<<arr[i]<<" ";
      i++;
      j++;
    }
  }
}

void Union(int *arr,int n,int *brr,int m)
{
  int i{0},j{0};

  while(i<n and j<m)
  {
    if(arr[i]>brr[j]){
      cout<<brr[j]<<" ";
      j++;
    }
    else if(arr[i]<brr[j]){
      cout<<arr[i]<<" ";
      i++;
    }
    else{
      cout<<arr[i]<<" ";
      i++;
      j++;
    }
  }

  while(i<n)
    cout<<arr[i++]<<" ";
  while(j<m)
    cout<<brr[j++]<<" ";
}

int main()
{
   int n; cin>>n;
   int *arr = new int[n];

   for(int i=0;i<n;i++)cin>>arr[i];


   int m; cin>>m;
   int *brr = new int[m];

   for(int i=0;i<m;i++)cin>>brr[i];


   Intersection(arr,n,brr,m);

   cout<<"UNION HERE:";
   Union(arr,n,brr,m);


}
