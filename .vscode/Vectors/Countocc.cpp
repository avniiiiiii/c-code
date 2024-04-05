// count the  no. of occurences of a particular element x
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
    int occurences = 0;
    for (int ele : v)
    {
        if (ele == x)
        {
            occurences++;
        }
    }
    cout << occurences << endl;
}