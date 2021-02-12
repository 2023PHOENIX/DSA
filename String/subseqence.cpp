const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void smallestWindw(string &s,string &p)
{
    int i{0},j{0};
    int first = 0;
    int last = 0;


    while(i<s.length() and j<p.length())
        {
            if(s[i]==p[j])
            {
                if(j==0)
                    first = i;
                if(j==p.length()-1)
                    last = i;
            i++;
            j++;
            continue;
            }
            else
            {
                i++;
                continue;
            }
        }

    bool flag = false;

    if(j==p.length())
        flag = true;

    // if(flag == false)
    //     return -1;


    while(j==p.length())
    {
        j = 0;
        i = first;

        while(i<=last and j<p.length())
        {
            if(s[i]==p[j]){
                if(j==0|| i!=first)
                    first = i;
                else if(j==p.length()-1)
                    last = i;
            i++;
            j++;
            continue;

            }
            else
                i++;
        }
    }

    for(int i= first;i<=last;i++)
        cout<<s[i];




}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s;   cin>>s;

    string p;   cin>>p;

    smallestWindw(s,p);
}