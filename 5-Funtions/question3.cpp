// Sum of digits of a number

#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int digiSum = 0;

    while (num > 0)
    {
        int lastdigit = num % 10;
        num = num / 10;
        digiSum = digiSum + lastdigit;
    }
    return digiSum;
}

int main()
{
    cout << "sum = " << sumOfDigits(2356) << endl;

    return 0;
}