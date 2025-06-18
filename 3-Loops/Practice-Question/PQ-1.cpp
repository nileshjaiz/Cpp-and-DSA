#include <iostream>
using namespace std;

int main()
{
    int n;
    int oddSum = 0;

    cout << "enter your no.";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            oddSum = oddSum + i;
        }
    }

    cout << oddSum;

    return 0;
}