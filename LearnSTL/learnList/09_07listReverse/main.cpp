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
    list<int> l({1, 2, 3});
    printList(l);

    l.reverse();
    printList(l);

    return 0;
}
