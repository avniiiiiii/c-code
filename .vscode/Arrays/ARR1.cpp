#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number of arrays:";
    cin >> n;
    // prompt the user to input the number of elements in the array and store it in the variable n.
    int arr[n]; // declares an integer array arr of size n.
                // The for loop iterates n times to input n elements into the array arr. Inside the loop, each element is read from the user input using cin and stored at index i of the array arr.
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    // Output the elements of the array in reverse order
    cout << "Reverse of the array: ";
    for (int i = n - 1; i >= 0; --i) // loop iterates over the array arr in reverse order, starting from index n - 1 down to 0.
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}