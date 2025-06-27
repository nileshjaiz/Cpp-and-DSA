// Return pair in sorted array with target sum

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int sz = arr.size();
    int target = 9;

    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                // int ans = arr.push_back(i), arr.push_back(j);   //wrong
                cout << arr[i] << "  " << arr[j];
            }
        }
    }

    return 0;
}