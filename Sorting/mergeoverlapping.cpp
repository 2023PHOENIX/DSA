const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// i/p : [(7,9), (6,10), (4,5), (1,3), (2,4) ]
// o/p : (1,5), (6,10)
	
class interval
{
public:
	int start;
	int end;
};
bool mycomp(interval a,interval b)
{
	return a.end<b.end;
}
void mergeinterval(interval *arr,int n)
{

	sort(arr,arr+n,mycomp);
	int res=0;
	for(int i=1;i<n;i++){

		if(arr[res].end >= arr[i].start)
		{
				arr[res].end = max(arr[res].end,arr[i].end);
				arr[res].start = min(arr[res].start,arr[i].start);
		}
		else
		{
			res++;
			arr[res] = arr[i];
			
		}

	}

	for(int i=0;i<=res;i++)
		cout<<arr[i].start<<" "<<arr[i].end<<endl;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    interval *arr = new interval[n];
    
    for(int i=0;i<n;i++){
    	cin>>arr[i].start;
    	cin>>arr[i].end;
    }

    mergeinterval(arr,n);


}