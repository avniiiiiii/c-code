#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "size:" << v.size() << "capacity:"
         << " " << v.capacity() << endl;
    v.push_back(1);
    cout << "size:" << v.size() << "capacity:"
         << " " << v.capacity() << endl;
    v.push_back(2);
    cout << "size:" << v.size() << "capacity:"
         << " " << v.capacity() << endl;
    v.push_back(3);
    cout << "size:" << v.size() << "capacity:"
         << " " << v.capacity() << endl;
    v.push_back(4);
    cout << "size:" << v.size() << "capacity:"
         << " " << v.capacity() << endl;
    v.push_back(5);
    cout << "size:" << v.size() << "capacity:"
         << " " << v.capacity() << endl;

    v.resize(10);
    cout << "size:" << v.size() << "capacity:"
         << " " << v.capacity() << endl;
    v.pop_back();
    v.pop_back();
    cout << "size:" << v.size() << "capacity:"
         << " " << v.capacity() << endl;
    vector<int> ve = {1, 2, 3, 4};
    ve.insert(ve.begin() + 1, 9);
}