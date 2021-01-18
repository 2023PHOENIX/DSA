const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void Sort_0(int *arr,int n)
{
   int count0{0},count1{0},count2{0};
   for(int i=0;i<n;i++)
   {
     if(arr[i]==1)
      count1++;
    if(arr[i]==2)
      count2++;
    else
      count0++;
   }
   int i =0;
   while(count0>0)
    {arr[i++] = 0;count0--;}

  while(count1>0)
    {arr[i++] = 1;count1--;}
  while(count2>0)
    {arr[i++] = 2;count2--;}


 }

int main()
{
  int n;  cin>>n;

  int *arr = new int[n];

  for(int i=0;i<n;i++)cin>>arr[i];


  Sort_0(arr,n);

  for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
