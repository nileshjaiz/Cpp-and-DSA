#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter you character";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "char is uppercase" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "char is lowercase" << endl;
    }
    else
    {
        cout << "invalid character";
    }
    return 0;
}