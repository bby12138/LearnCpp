#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ret{1, 2, 3, 4, 5};
    std::cout << ret.size() << std::endl;
    ret.push_back(1024);
    std::cout << ret.size() << std::endl;
    cout << ret[0] << endl;

    for (int i = 0; i < ret.size(); ++i)
    {
        cout << ret[i] << ' ';
    }
    cout << endl;

    return 0;
}
