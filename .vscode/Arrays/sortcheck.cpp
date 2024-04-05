// check if the given array is sorted or not??
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,
                 4,
                 5,
                 6,
                 67,
                 7};

    bool sortflag = false;
    for (int i = 1; i < 6; i++)
    {
        if (a[i] > a[i - 1])
        {
            sortflag = true;
        }
    }
    cout << sortflag << endl;
}