const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


// arrival : 800,700,600,500
// dep : 840,820,830,530
int meetGuest(int *arr,int *brr,int n)
{
	sort(arr,arr+n);
    sort(brr,brr+n);

    int i{0},j{0};

    int maxAttend = INT_MIN;
    int maxGuest = 0;
    while(i<n and j<n){
        if(arr[i]<=brr[j]){
            maxGuest++;
            i++;
        }
        else
        {
            j++;
            maxGuest--;

        }
        maxAttend = max(maxAttend,maxGuest);
    }
    return maxAttend;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    int *brr = new int[n];

	for(int i=0;i<n;i++)cin>>brr[i];

   	cout<<meetGuest(arr,brr,n)<<endl;
}