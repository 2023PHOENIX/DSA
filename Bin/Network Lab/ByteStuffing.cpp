#include<bits/stdc++.h>

using namespace std;


string convertToBinary(string s)
{
    int n = s.length();


    string str;

    for(int i=0;i<s.length();i++)
    {
        int value = int(s[i]);

        while(value)
        {
            (value%2==1)?str.push_back('1'):str.push_back('0');


        value /= 2;            
        }
    }
    reverse(str.begin(),str.end());


    return str;

}



int main()
{
    string s;   cin>>s;

    cout<<convertToBinary(s);
}