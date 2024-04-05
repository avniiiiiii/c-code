// TARGET SUM WITH DOUBLE//
// find the total no. of pairs in the array whose sum is equal to the given value
#include <iostream>
using namespace std;

int main()
{
    int array[] = {3,
                   2,
                   5,
                   4,
                   4};
    int targetsum = 5;
    int pairs = 0;
    for (int i = 0; i < 5; i++) // for constant
    {
        for (int j = i + 1; j < 5; j++) // loop for i+1 elements
        {
            if (array[i] + array[j] == targetsum)
            {
                pairs++;
            }
        }
    }
    cout << pairs << endl;
}