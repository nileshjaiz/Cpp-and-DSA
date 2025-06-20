#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int main()
{
    cout << sum(10, 5) << endl;
    return 0;
}

// int min(int a, int b)
// {
//     if (a < b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
//     return 0;
// }

// int main()
// {
//     cout << min(5, 4) << endl;
//     return 0;
// }