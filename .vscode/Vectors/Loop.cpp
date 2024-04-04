#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // Read five integer inputs from the user and store them in the vector
    cout << "Enter five integers: ";
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    // Print the elements of the vector
    cout << "Elements of the vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
