#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &v)
{
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> v = {9, 8, 5, 2, 1, 1};
    printVector(v);
    v.pop_back();
    printVector(v);

    vector<int>::iterator iter = v.erase(v.begin());
    printVector(v);
    cout << *iter << endl;

    v.clear();
    printVector(v);

    return 0;
}
