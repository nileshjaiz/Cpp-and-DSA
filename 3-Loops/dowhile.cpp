#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter you no.";
    cin >> n;
    bool isPrime = true;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << " is a prime no.";
    }
    else
    {
        cout << " is not prime";
    }
    return 0;
}