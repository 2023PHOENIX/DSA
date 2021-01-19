const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void reverse(vector<int> &arr,int low,int high)
{
  

  while(low<high)
  {
    int temp = arr[low];

    arr[low] = arr[high];

    arr[high] = temp;

    low ++;
    high--;
  }

}
void reverseInGroups(vector<int> &arr,int n,int d)
{
  int i{0};
  for(i=0;i<n-d;i+=d)
  {
    if(i+d<=n-1)
      reverse(arr,i,i+d-1);
    else
    {
      reverse(arr,i,n-1);
    }
    
  }
  cout<<"index "<< i<<endl;

  reverse(arr,i,n);
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++)
    {
      int d;cin>>d;
      arr.push_back(d);
    }
    int d;  cin>>d;


    reverseInGroups(arr,n-1,d);

    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}