#include <iostream>
#include <list>
using namespace std;

void printList(list<int>& l)
{
    for (list<int>::iterator iter = l.begin(); iter != l.end(); ++iter)
    {
        cout << *iter << ' ';
    }
    cout << endl;
}

int main()
{
    list<int> l = {9,8,5,2,1,1};
    cout << "l: ";
    printList(l);

    list<int>l1;
    l1 = l;
    cout << "l1: ";
    printList(l1);

    list<int> l2;
    l2.assign(l1.begin(), l1.end());
    cout << "l2: ";
    printList(l2);

    list<int>l3;
    l3.assign({1,2,3,4});
    cout << "l3: ";
    printList(l3);

    list<int> l4;
    l4.assign(8,6);
    cout << "l4: ";
    printList(l4);

    return 0;
}