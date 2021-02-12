const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class MyHash{
public:
    int size,capacity;
    int *arr;

    MyHash(int c)
    {
        capacity = c;
        size = 0;
        arr = new int[capacity];
        for(int i=0;i<capacity;i++)
            arr[i] = -1;
    }
    int hash(int key)
    {
        return key%capacity;
    }

    bool search(int key);
    bool insert(int key);
    bool Delete(int key);
    
    
};
bool MyHash::search(int key)
{
    int h = hash(key);
    int i = h;

    while(arr[i]!=-1){
        if(arr[i]==key)
            return true;
        i = (i+1)%capacity;

        if(i==h)
            return false;
    }

    return false;
}
bool MyHash::insert(int key)
{
    if(size==capacity)
        return false;
    
    int i = hash(key);

    while(arr[i]!=-1 and arr[i]!=-1 and arr[i]!=key)
    {
        i = (i+1)%capacity;
    }
    if(arr[i]==key)
        return false;
    else
    {
        arr[i] = key;
        size++;
        return true;
    }
    
}
bool MyHash::Delete(int key)
{
    int h = hash(key);
    int i = h;
    while(arr[i]!=-1)
    {
        if(arr[i] == key)
        {
            arr[i] = -2;
            return true;
        }
        i = (i+1)%capacity;

        if(i==h)
            return false;
    }
    return false;
}


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    MyHash Hash(7);
    cout<<Hash.insert(49);
    cout<<Hash.insert(29);
    cout<<Hash.insert(71);
    cout<<endl;
    (Hash.search(71))?cout<<"YES":cout<<"NO";
    cout<<endl;


}