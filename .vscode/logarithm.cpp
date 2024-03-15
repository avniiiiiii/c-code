#include <iostream>
using namespace std;
int powerlog(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    int x = powerlog(a, b / 2);

    if (b % 2 == 0)
        return x * x;
    else
        return x * x * a;
}
int main()
{
    int a;
    cout << "enter a: ";
    cin >> a;

    int b;
    cout << "enter b: ";
    cin >> b;

    cout << powerlog(a, b) << endl;
}