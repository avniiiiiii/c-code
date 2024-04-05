// TARGET SUM WITH triplets//
// COUNT THE NUMBER OF TRIPLETS WHOSE SUM IS WQUAL TO THE GIVEN VALUE X//
#include <iostream>
using namespace std;

// target sum =6
// i=0 j=1 k=2 3 4
// arr[i]=3
// arr[j]=1
// arr[k]=2 4 0
// t.s true false false
int main()
{
    int array[] = {3, 1, 2, 4, 0, 6};
    int targetsum = 5;
    int triplets = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            for (int k = j + 1; k < 6; k++)
            {
                if (array[i] + array[j] + array[k] == targetsum)
                {
                    triplets++;
                }
            }
        }
    }
    cout << triplets << endl;
}