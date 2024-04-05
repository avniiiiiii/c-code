// find the difference btw  the sum of elements at even indices and sum of elements at odd indices//
// output =[sumeven-sumodd]
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 2, 1, 2};
    int sumans = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            sumans += arr[i];
        }
        else
        {
            sumans -= arr[i];
        }
    }
    cout << sumans << endl;
}
