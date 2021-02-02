const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class myHash
{
    public:
        int bucket;
        list<int> *table;

        myHash(int b){
            bucket = b;
            table = new list<int>[b];
        }

        void insert(int key){
            int i = key%bucket;
            table[i].push_back(key);
        }
        void remove(int key){
            int i = key%bucket;
            table[i].remove(key);
        }
        bool search(int key){
            int i = key%bucket;
            for(auto &i : table[i])
                if(i==key)
                    return true;
            return false;
        }
};

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int n;  cin>>n;
    myHash Hash(n);

    for(int i=0;i<n;i++){
        int d;  cin>>d;
        Hash.insert(d);
    }
    Hash.remove(56);
    cout<<Hash.search(56);
    (Hash.search(30))?cout<<"YES\n":cout<<"NO\n";
    

    
}