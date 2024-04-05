// finf the second largest element in an array
#include <iostream>
using namespace std;
int Largestnum(int array[], int size)
{
    int max = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
}
int main()
{
}