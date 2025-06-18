#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no.";
    cin >> n;
    int count = 1;
    for (int i = 0; i <= n - 1; i++)
    {

        for (int j = 0; j <= n - 1; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    };

    // int n;
    // cout << "enter no.";
    // cin >> n;
    // char ch = 'A';
    // for (int i = 0; i <= n - 1; i++)
    // {

    //     for (int j = 0; j <= n - 1; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // };
    return 0;
}