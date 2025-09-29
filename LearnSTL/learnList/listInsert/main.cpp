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
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    printList(l);

    l.push_back(-1);
    l.push_back(-2);
    l.push_back(-3);
    printList(l);

    list<int>::iterator iter = l.begin();
    ++iter;
    ++iter;
    ++iter;
    l.insert(iter, 88);
    printList(l);

    l.insert(iter, 6, 66);
    printList(l);

    iter = l.begin();
    ++iter;
    l.insert(iter, l.begin(), l.end());
    printList(l);

    return 0;
}