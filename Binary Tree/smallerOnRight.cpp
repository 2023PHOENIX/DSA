const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--){
    int n;  cin>>n;

    vector<int> v(n);

    for(auto &i : v)
        cin>>i;

    set<int> st;

    st.insert(v[n-1]);
    int result = 0;
    for(int i = n-2;i>=0;i--)
    {
        int di = distance(st.begin(),st.lower_bound(v[i]));

        result = max(result,di);
        st.insert(v[i]);
    }

    cout<<result<<endl;

}

    
}