// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//  You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {4, 1, 2, 1, 2};

    int ans = 0;

    for (int val : vec)
    {
        ans = ans ^ val;
    }
    cout << ans << endl;
    return 0;
}