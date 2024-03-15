#include <iostream>
#include <cstdlib> // Include the cstdlib header for the abs function

using namespace std;

void update(int *a, int *b)
{
    int sum = *a + *b;
    int diff = abs(*a - *b); // Calculate absolute difference using the abs function
    *a = sum;                // Update the value pointed to by a to contain their sum
    *b = diff;               // Update the value pointed to by b to contain their absolute difference
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a >> b; // Input values for a and b using cin
    update(pa, pb);
    cout << a << "\n"
         << b; // Output the updated values of a and b using cout

    return 0;
}
