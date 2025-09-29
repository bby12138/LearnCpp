#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>& l)
{
    for (list<int>::const_iterator iter = l.begin(); iter != l.end(); ++iter)
    {
        cout << *iter <<' ';
    }
    cout << endl;
}

int main()
{
    list<int> l1;
    cout << "l1: ";
    printList(l1);

    list<int>l2_1 = {9,8,7,6,5};
    cout << "l2_1: ";
    printList(l2_1);

    list<int>l2_2 ({9,8,7,6,5});
    cout << "l2_2: ";
    printList(l2_2);

    list<int> l3(l2_1.begin(), l2_1.end());
    cout << "l3: ";
    printList(l3);

    list<int>l4(8);
    cout << "l4: ";
    printList(l4);

    list<int> l5(8,6);
    cout << "l5: ";
    printList(l5);

    list<int> l6(l2_2);
    cout << "l6: ";
    printList(l6);

    return 0;
}