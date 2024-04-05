

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,
                 2,
                 1,
                 2,
                 1,
                 2,
                 1};
    int sumans = 0;
    for (int i = 1; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            sumans += arr[i];
        }
    }
}