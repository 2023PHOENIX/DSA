const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;

#define INT_BITS 32
typedef long long int ll;

int leftRotate(int n,int d)
{
  return (n<<d)|(n>>( INT_BITS - d ));
}

int rightRotate(int n,int d)
{
  return (n>>d)|(n<<(INT_BITS-d));

}
int main()

{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;  cin>>n>>k;

    cout<<leftRotate(n,k)<<endl;
    cout<<rightRotate(n,k)<<endl;
}
