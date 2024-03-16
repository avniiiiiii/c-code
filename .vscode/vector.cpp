// VARIABLE SIZED ARRAY//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> a(n); // 2D VECTOR
    for (int i = 0; i < n; i++)
    {
        int k_size;
        cin >> k_size;
        vector<int> k(k_size);
        for (int j = 0; j < k_size; j++)
        {
            cin >> k[j];
        }
        a[i] = k;
    }
    for (int z = 0; z < q; z++)
    {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
}
// Problem Statement:
// You're given an integer n representing the number of arrays. Each of these arrays contains integers. You're also given q queries. Each query consists of two integers i and j, where i represents the index of an array, and j represents the index within that array. You need to print the element at index j of the array at index i for each query.

// Explanation of the Code:
// Include Header Files: The code includes necessary header files for basic input-output operations (cin, cout) and for using vectors.

// Main Function: The program starts by defining the main() function.

// Input: It reads two integers n and q from the standard input stream (usually the keyboard). These represent the number of arrays and the number of queries, respectively.

// 2D Vector Declaration: A 2D vector a is declared with n rows, each initially empty. This vector will hold the arrays and their elements.

// Array Input: The code then enters a loop to input the arrays. For each array, it first reads an integer k_size, representing the number of elements in the current array. Then, it reads k_size integers and stores them in a 1D vector k. After that, it assigns this 1D vector to the i-th row of the 2D vector a.

// Query Processing: Another loop is used to process the queries. For each query, it reads two integers i and j, representing the array index and the element index within that array. Then, it prints the element at index j of the array at index i.

// Return Statement: The main() function ends with a return statement indicating successful completion of the program.

// Vector Explanation:
// Vectors are a dynamic array-like data structure provided by the C++ Standard Template Library (STL).
// vector<int> represents a dynamic array of integers, and vector<vector<int>> represents a 2D dynamic array.
// a[n] creates an array of size n of type vector<vector<int>>, initializing each element with an empty vector.
// Problem Understanding:
// You have multiple arrays, each containing integers.
// Queries ask you to find elements from specific positions within these arrays.
// The code reads the input arrays and processes the queries to provide the requested elements.
// Simplified Explanation:
// Input: Read the number of arrays n and the number of queries q.
// Read Arrays: For each array, read its size and elements.
// Process Queries: For each query, find and print the element at the specified position within the specified array.
// Output: Print the requested elements for each query.
// In essence, the program reads arrays of integers and then answers queries by retrieving elements from those arrays based on the provided indices.//
