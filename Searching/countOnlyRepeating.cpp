// N = 5
// arr[] = {1,2,3,3,4}
// Output: 3 2
// Explanation: In the given array, 3 is 
// occuring two times.

const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int countRepeating(int *arr,int n)
{
    if(n==0)
        return {0,0};
    int low = 0;
    int high = n-1;

    while(low<high)
    {
        int mid = low + (high - low)/2;

        if(arr[mid]>=mid + arr[0])
                low = mid +1;
        else
            high = mid;
    }

    return {arr[low],n - (arr[n-1] - arr[0]) };
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;    cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<< countRepeating(arr,n);

}