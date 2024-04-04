// calculate combination of two numbers
#include <iostream>
using namespace std;

// Function to calculate factorial
int fact(int num)
{
    int f = 1;
    for (int i = 1; i <= num; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n, r;

    // Input n and r
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    // Calculate factorials
    int a = fact(n);     // a=n!
    int b = fact(r);     // b=r!
    int c = fact(n - r); // c=(n-r)!

    // Calculate combination
    int combination = a / (b * c);

    // Output the combination
    cout << "Combination of n and r is " << combination;

    return 0;
}

// in permutation and combination, r needs to be smaller than n
