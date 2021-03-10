const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Heap
{
public:
    int *arr;
    int size;
    int capacity;


    Heap(int n)
    {
        arr = new int[n];
        size = 0;
        capacity = n;
    }

    int left(int i) { return (i * 2 + 1); }
    int right(int i) { return (i * 2 + 2); }
    int parent(int i) { return (i - 1) / 2; }

    void insert(int);

    void MinHeapify(int);

    int RemoveMinimum();

    void deleteValue(int index);

    void decreasingKey(int i,int x)
    {
        arr[i] = x;
        while(i!=0 and arr[i]<arr[parent(i)] )
        {
            swap(arr[i],arr[parent(i)]);
            i = parent(i);
        }
    }

   

    
};

void Heap::insert(int d)
{
    if (size == capacity)
        return;

    size++;
    arr[size - 1] = d;

    for (int i = size - 1; i > 0 and arr[parent(i)] > arr[i];)
    {
        swap(arr[i], arr[parent(i)]);

        i = parent(i);
    }
}

void Heap:: MinHeapify(int i)
{
    int lc = left(i);
    int rc = right(i);

    // by deafult let say smallest element b/w these 3 root;
    int smallest = i;

    if(lc<size and arr[lc] < arr[smallest])
        smallest = lc;

    if(rc < size and arr[rc] < arr[smallest])
        smallest = rc;

    if(smallest != i)
    {
        swap(arr[i],arr[smallest]);
        MinHeapify(arr[smallest]);
    }
}

int Heap::RemoveMinimum()
{
    if(size==0)
        return INT_MAX;
    if(size==1)
        {
            size--;
            return arr[0];
        }
    
    swap(arr[0],arr[size-1]);
    size--;

    MinHeapify(0);

    return arr[size];
}

void Heap::deleteValue(int i)
{
    swap(arr[i],arr[size-1]);
    size--;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Heap H(10);

    H.insert(10);
    H.insert(20);
    H.insert(30);
    H.insert(80);
    H.insert(100);
    H.insert(70);


    H.deleteValue(3);
    for(int i=0;i<H.size;i++)
        if(H.arr[i]!=0)
        cout<<H.arr[i]<<" ";
    

}