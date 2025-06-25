// Min and Max in Array

#include <iostream>
using namespace std;

int main()
{

    int marks[5] = {99, 100, 60, 80, 60};
    int size = 5;

    // calculting the size of array on our own.
    //  int sz = sizeof(marks) / sizeof(int);
    //  cout << sz;

    // loop
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}