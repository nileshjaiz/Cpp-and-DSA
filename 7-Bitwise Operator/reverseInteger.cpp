// waf to reverse an integer

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter your no.";
    cin >> n;
    while (n > 0)
    {

        int a = n % 10;
        int rev = a;

        n = n / 10;
        cout << rev;
    }
}