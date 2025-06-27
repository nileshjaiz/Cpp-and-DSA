// Kadane's Algorithm | Maximum Sub-Array Sum | Kandane's Algorithm

#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        currSum += arr[st];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << "max subarray sum = " << maxSum << endl;

    return 0;
}