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
    MinHeap(int x)
    {
        arr = new int[x];
        size = 0;
        capacity = x;
    }
    int left(int i)
    {
        return (i*2 + 1);
    }
    int right(int i)
    {
        return (i*2 + 2);
    }
    int parent(int x)
    {
        return (x-1)/2;
    }

    void insert(int x)
    {
        if(size==capacity)
            return;

        size++;
        arr[size-1] = x;

        for(int i=size-1;i>0 and arr[i] < arr[parent(i)];)
        {
            swap(arr[i],arr[parent(i)]);
            i = parent(i);
        }
    }

    void minHeapify(int i)
    {
        int lt = left(i);
        int rt = right(i);

        int smallest = i;

        // compare all three values

        if(lt<size and arr[lt] < arr[i])
            smallest = lt;
        if(rt<size and arr[lt]>arr[i])
            smallest = rt;
        

        if(smallest!=i)
        {
            swap(arr[smallest],arr[i]);
            minHeapify(smallest);
        }    
    }

    int removeMin()
    {
        if(size<=0)
            return INT_MAX;
        if(size==1)
        {
            size--;
            return arr[0];
        }


        swap(arr[0],arr[size-1]);
        size--;
        minHeapify(0);
      


        return arr[size];

    }
};

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    MinHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.insert(15);
    h.insert(20);
    cout << h.removeMin() << " ";


}