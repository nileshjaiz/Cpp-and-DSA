// smallest and biggest in the array
#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int marks[5] = {99, 100, 60, -80, 60};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(marks[i], smallest);
        largest = max(marks[i], largest);
    }
    cout << smallest << endl;
    ;
    cout << largest;

    return 0;
}