// initializing and understanding vector.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec = {1, 2, 3};
    // cout << vec[2];

    // vector<int> vec = {1, 2, 3, 4};

    // cout << vec.size() << endl;

    // for (int i : vec)
    // {
    //     cout << i << endl;
    // }

    vector<int> vec;

    cout << "before push back:  " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    vec.push_back(28);
    vec.push_back(29);
    cout << "after pushback:  " << vec.size() << endl;
    vec.pop_back();
    cout << "after popping: " << vec.size() << endl;
    cout << "first elementt: " << vec.front() << endl;
    cout << "last element:  " << vec.back() << endl;
    cout << "value of index 2:  " << vec.at(2) << endl;

    return 0;
}