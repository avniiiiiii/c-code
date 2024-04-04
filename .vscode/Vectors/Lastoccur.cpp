// find the last occurrence of an element x in a given array//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6); // Resize the vector to size 6
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    cout << "enter x:";
    int x;
    cin >> x;
    int occurrence = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            occurrence = i;
        }
    }
    cout << occurrence << endl;
    return 0;
}
