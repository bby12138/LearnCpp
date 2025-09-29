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
    list<int> l({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    printList(l);
    l.pop_back();
    l.pop_front();
    list<int>::iterator iter = l.begin();
    ++iter;
    ++iter;
    ++iter;
    iter = l.erase(iter);
    printList(l);

    cout << *iter << endl;

    l.clear();
    printList(l);

    return 0;
}
