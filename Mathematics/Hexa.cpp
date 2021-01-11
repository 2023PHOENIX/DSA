const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> PrimeFactor(int n)
{
    vector<int> result;
    if (n % 2 == 0)
    {

        while (n % 2 == 0)
            n = n / 2;

        result.push_back(2);
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            result.push_back(i);
        }
    }
    if (n > 2)
        result.push_back(n);

    return result;
}

bool isHexa(int n)
{
    vector<int> pf = PrimeFactor(n);

    if (pf.at(0) == n)
        return 0;

    int allPrime{0};

    for (auto &i : pf)
    {
        while (i > 0)
        {
            int rem = i % 10;
            i /= 10;

            allPrime += rem;
        }
    }

    int sum_n{0};

    for (sum_n = 0; n > 0; sum_n += n % 10, n /= 10)
        ;

    return sum_n == allPrime;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << isHexa(n);
}