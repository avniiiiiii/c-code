// find the unique number in a given array where all the elements are being repeated twicewith one value being unique//
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 8, 2, 9, 1, 6, 8, 6, 2};

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (arr[i] = arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }
}