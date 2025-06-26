// WAP to swap max & min number of an array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = 4;
    int maxIdx = 0, minIdx = 0;
    // Find indices of max and min
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[maxIdx])
            maxIdx = i;
        if (arr[i] < arr[minIdx])
            minIdx = i;
    }
    // Swap max and min using swap function
    swap(arr[maxIdx], arr[minIdx]);
    // Print the array after swap
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}