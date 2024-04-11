// finf the second largest element in an array
#include <iostream>
using namespace std;
#include <iostream>
#include <climits> // For INT16_MIN
using namespace std;

int largestNumIndex(int array[], int size)
{
    int max = INT16_MIN;
    int maxIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main()
{
    int array[] = {1, 3, 5, 4, 9, 10};
    int largestIndex = largestNumIndex(array, 6);
    array[largestIndex] = -1;
    int secondLargestIndex = largestNumIndex(array, 6);
    cout << array[secondLargestIndex] << endl;

    return 0;
}
