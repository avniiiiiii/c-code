
#include <iostream>
using namespace std;

int main()
{
    int array[] = {3,
                   2,
                   5,
                   1,
                   4};
    int targetsum = 5;
    int pairs = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; i++)
        {
            if (array[i] + array[j] == targetsum)
            {
                pairs++;
            }
        }
    }
    cout << pairs << endl;
}