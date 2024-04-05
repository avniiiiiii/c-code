// check if the given array is sorted or not??
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,
               4,
               5,
               6,
               67,
               7};

    bool sortflag = true;
    for (int i = 1; i < 6; i++)
    {
        if (a[i] <= a[i - 1])
        {
            sortflag = false;
        }
    }
    cout << sortflag << endl;
}
// 0 is false
// 1 is true