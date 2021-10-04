#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        if (v[mid] == 0) // push the 0's to the front
        {
            swap(v[low++], v[mid++]);
        }
        else if (v[mid] == 1)
            mid++;
        else if (v[mid] == 2) // push 2's to the back
            swap(v[mid], v[high--]);
    }
    cout << "Sorted array" << endl;
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}

/*
Problem statement: given an array of size n, it only contains 0s,1s and 2s. sort this array.
methods:
    1)using sort function or any sorting algorithms
        Time complexity:O(nlopn)
    2) count 0s,1s and 2s using 3 count variables, create an ans vector, first put 0s, then 1s,then 2s as per their counts.
        Time complexity:O(n)
    3)using 3 pointers
        low: for 0
        mid: for 1
        high: for 2
        Time complexity:O(n)
        Space complexity: O(n)
*/