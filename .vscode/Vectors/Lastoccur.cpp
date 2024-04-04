// find the last occurrence of an element x in a given array//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6); // This means the vector initially contains 6 elements
    // loop reads 6 integers from the standard input (cin) and stores them in the vector v.
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
        // Each integer is accessed using the index i and placed into the corresponding position in the vector.
    }
    cout << "enter x:";
    int x;
    cin >> x;
    int occurrence = -1;
    // oop iterates over each element of the vector v to find the last occurrence of the value x. If the current element matches x, the index i is stored in the variable occurrence.
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
// the program prints the index of the last occurrence of x in the vector v.