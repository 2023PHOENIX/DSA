const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class MinHeap
{
public : 
    int* arr;
    int size;
    int capacity;
    
    
    // methods  // 
    MinHeap(int);
    int left(int);
    int right(int);
    int parent(int);
    void insert(int x);
};


MinHeap::MinHeap(int c)
{
    arr = new int[c];
    size = 0;
    capacity = c;
}

int MinHeap::left(int i)
{
    return (2*i + 1);
}

int MinHeap:: right(int i)
{
    return (2*i + 2);
}

int MinHeap::parent(int i)
{
    return (i-1)/2;
}


void MinHeap::insert(int x)
{
    if(capacity==size)
        return;
    
    size++;
    arr[size-1] = x;

    for(int i=size-1; i>0 and arr[parent(i)] > arr[i]; )
    {
        swap(arr[i],arr[parent(i)]);
        i = parent(i);
    }


}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    MinHeap mh(n);

    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        mh.insert(d);
    }

    for(int i=0;i<n;i++)
    {
        cout<<mh.arr[i]<<" ";
    }
}