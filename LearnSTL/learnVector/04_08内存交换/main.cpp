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
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {6, 7, 8, 9, 10};
    cout << "v1:";
    printVector(v1);
    cout << "v2:";
    printVector(v2);

    v1.swap(v2);
    cout << "v1:";
    printVector(v1);
    cout << "v2:";
    printVector(v2);

    //缩容
    v1.resize(10000);
    v1.resize(5);
    cout << "v1.capacity()=" << v1.capacity() << endl;
    vector<int>(v1).swap(v1);
    cout << "v1.capacity()=" << v1.capacity() << endl;
    vector<int>x(v1);
    cout << "v1.capacity()=" << v1.capacity() << endl;


    v2.resize(100000);
    v2.clear();
    cout << "v2.capacity()=" << v2.capacity() << endl;
    vector<int>({}).swap(v2);
    cout << "v2.capacity()=" << v2.capacity() << endl;


    return 0;
}
