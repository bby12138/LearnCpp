#include <iostream>
#include <list>
using namespace std;

void printList(list<int> &l)
{
    for (list<int>::iterator iter = l.begin(); iter != l.end(); ++iter)
    {
        cout << *iter << ' ';
    }
    cout << endl;
}

int main()
{
    list<int> l;
    cout << "l.empty(): " << l.empty() << endl;
    cout << "l.size(): " << l.size() << endl;

    l.assign({1, 2, 3});
    cout << "l.empty(): " << l.empty() << endl;
    cout << "l.size(): " << l.size() << endl;

    l.resize(18);
    cout << "l.empty(): " << l.empty() << endl;
    cout << "l.size(): " << l.size() << endl;
    printList(l);

    l.resize(20, 6);
    cout << "l.empty(): " << l.empty() << endl;
    cout << "l.size(): " << l.size() << endl;
    printList(l);

    l.resize(10000);
    l.resize(5);
    cout << "l.size(): " << l.size() << endl;
    printList(l);

    return 0;
}
