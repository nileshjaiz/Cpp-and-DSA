// Understanding liner search

// WAP to find target = 8 in an array = [4,2,7,8,1,2,5] and print its index, and if the target value is not present return -1.

#include <iostream>
using namespace std;

int linerSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;
    int target = 8;

    cout << linerSearch(arr, sz, target) << endl;

    return 0;
}