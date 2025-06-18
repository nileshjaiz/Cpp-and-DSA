#include <iostream>
using namespace std;

int main()
{

    // int n;
    // cout << "enter your no.";
    // cin >> n;

    // for (int i = 0; i <= n - 1; i++)
    // { // column
    //     for (int j = 0; j <= n - 1; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    int n;
    cout << "enter your no.";
    cin >> n;

    for (int i = 0; i <= n - 1; i++)
    { // column
        char ch = 'A';
        for (int j = 0; j <= n - 1; j++)
        {
            cout << ch << " ";
            ch++;
        };
        cout << endl;
    }

    return 0;
}