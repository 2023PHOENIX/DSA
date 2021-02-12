const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void reverse(char * str,int low,int high)
{
	while(low<=high){
		swap(str[low],str[high]);
		low++;
		high--;
	}
}

void reverseString(char *str,int n)
{
	int start = 0;
	for(int end = 0;end<n;end++){
		if(str[end]==' '){
			reverse(str,start,end-1);
			start = end+1;
		}
	}
 	reverse(str,start,n-1);
 	reverse(str,0,n-1);
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;

    char s[n] = "hello welcome to gfg";

    reverseString(s,n);

	for(int i=0;i<n;i++)
		cout<<s[i];
}