// finf the second largest element in an array
#include <iostream>
using namespace std;
int largestnum(int array[], int size)
{
    int max = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int main()
{
    int array[] = {1,
                   3,
                   5,
                   4,
                   9,
                   10};
    int Largestnum = largestnum(array, 6);
}