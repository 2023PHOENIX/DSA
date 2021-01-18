const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(int *a,int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
 void sortTheArray(int *arr,int n)
 {
   int minIndex{INT_MAX},i,j;

   for(i = 0;i<n-1;i++)
   {
     minIndex = i;
     for(j = i+1 ; j<n;j++)
     {
       minIndex = min(arr[minIndex],arr[j]);
     }
     swap(&arr[i],&arr[minIndex]);
   }
 }

int main()
{
  int n;  cin >> n;

  int *arr = new int[n];

  for(int i=0;i<n;i++)cin>>arr[i];

  sortTheArray(arr,n);

  for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
