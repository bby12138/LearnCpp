#include <algorithm>
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

bool cmp(const int &a, const int &b)
{
    return a > b;
}

int main()
{
    list<int> l({4, 2, 6, 1, 3, 5});
    printList(l);
    l.sort();
    printList(l);
    l.sort(cmp);
    printList(l);
    return 0;
}
