// WAP to calculate sum & product of all numbers in an array.

#include <iostream>
using namespace std;

int sumofNum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int productofNum(int arr[], int size)
{
    int prod = 1;
    for (int i = 0; i < size; i++)
    {
        prod *= arr[i];
    }
    return prod;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    int sum = sumofNum(arr, size);
    int prod = productofNum(arr, size);
    cout << sum << endl;
    cout << prod << endl;

    return 0;
}