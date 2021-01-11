const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int KthPrimeFactor(int n, int k)
{


    while (n % 2 == 0)
    {
        n /= 2;
        k--;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            if(k==1)
                return i;
            k--;
            n = n / i;

        }
    }

    if (n > 2 and k==1)
        return n;



    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    cout << KthPrimeFactor(n, k - 1);
}
