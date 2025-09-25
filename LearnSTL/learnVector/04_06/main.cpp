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
    vector<int> v1 = {9,8,7,6};
    printVector(v1);

    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;

    v1.push_back(1);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;

    return 0;
}