const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void MaxHeapify(vector<int> &arr,int i,int n)
{
    // int n  = arr.size();

    int largest = i;

    int L = (2*i + 1);
    int R = (2*i + 2);

    if(L<n and arr[L] > arr[largest])
        largest = L;

    if(R<n and arr[R] > arr[largest])
        largest = R;
    
    if(largest!=i){
    swap(arr[i],arr[largest]);
    MaxHeapify(arr,largest,n);
    }
}


// build heap from last internal node to root 
void buildHeap(vector<int> &arr)
{
    int n= arr.size();

    for(int i= (n-2)/2 ; i >= 0 ; i-- )
    {
        MaxHeapify(arr,i,n);
    }
}

// here we are changing the root value then calling MaxHeapify 
// So overall our last element is going to get sorted and we are 
//  going to decrease the i after every iteration.
void heapSort(vector<int> &arr,int n)
{
    buildHeap(arr);

    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        MaxHeapify(arr,0,i);

    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    vector<int> v(n);

    for(auto &i : v)cin>>i;

    buildHeap(v);

    for(auto i : v)cout<<i<<" ";
    cout<<endl;

    heapSort(v,v.size());

    for(auto i : v)cout<<i<<" ";

}