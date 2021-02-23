#include <iostream>
#include <algorithm>
using namespace std;
 
// Function to find all lexicographically next permutations of a
// string sorted in ascending order using `std::next_permutation`
void permutations(string str)
{
    // sort the string in ascending order
    sort(str.begin(), str.end());
 
    while (1)
    {
        // print the current permutation
        cout << str << " ";
 
        // find the next lexicographically ordered permutation
        if (!next_permutation(str.begin(), str.end())) {
            break;
        }
    }
}
 
int main()
{
    string str = "BADC";
 
    permutations(str);
 
    return 0;
}