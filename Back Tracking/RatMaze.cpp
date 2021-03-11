const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int solution[3][3];


bool isSafe(int **mat,int n, int i,int j)
{
    if(i < n and j < n and mat[i][j]==1)
        return true;

    return false;
}
bool SafeRecur(int**mat,int n,int i,int j)
{
    if(i==n-1 and j == n-1){
     solution[i][j] = 1;
        return true;
    }
    if(isSafe(mat,n,i,j))
    {
        solution[i][j] = 1;
        if(SafeRecur(mat,n,i+1,j))
            return true;
        else if(SafeRecur(mat,n,i,j+1))
            return true;
        else
            solution[i][j] = 0;
    }

    return false;
}

void printSolution(int arr[][3],int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}

bool solveMaze(int ** arr,int n)
{
    if(SafeRecur(arr,n,0,0)){
        // print solution
        printSolution(solution,n);
        return true;
    }
    return false;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    int **arr = new int*[n];

    for(int i=0;i<n;i++)
    {
        arr[i] = new int[n];

        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }
    cout<<solveMaze(arr,n);



}