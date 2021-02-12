const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// void longestSubArray(int *arr,int n,int sum)
// {
//     int prefixSum = 0;
//     int longestSum = 0;

//     for(int i=0;i<n;i++)
//     {
//         prefixSum = 0;
//         for(int j=i;j<n;j++)
//         {
//             if(prefixSum == sum)
//                 longestSum = max(longestSum,j-i);
//             prefixSum += arr[j];
//         }
//     }
//     cout<<longestSum<<endl;
// }

void longestSubArray(int *arr,int n,int sum)
{
    int prefix = 0;
    int result = 0;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)
    {
        prefix += arr[i];

        if(prefix==sum)
            result = i+1;
        
        if(map.find(prefix)==map.end())
            map.insert({prefix,i});

        if(map.find(prefix-sum)!=map.end())
            result = max(result,i-map[prefix-sum]);
                
    }

    cout<<result<<endl;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    int sum;    cin>>sum;
    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    longestSubArray(arr,n,sum);
}