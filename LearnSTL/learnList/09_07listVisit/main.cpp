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

int getListItemByIndex(list<int>& l, int index)
{
    list<int>::iterator iter = l.begin();
    while (index--)
    {
        ++iter;
    }
    return *iter;
}

int main()
{
    list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << getListItemByIndex(l, 5) << endl;

    cout << l.back() << endl;
    cout << l.front() << endl;


    return 0;
}
