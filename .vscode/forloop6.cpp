// you will be given two positive integers,  and  (), separated by a newline.
// Output Format:
// For each integer  in the inclusive interval :
// If ,1<n<9 then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
// Else if n>9 and it is an even number, then print "even".
// Else if n>9 and it is an odd number, then print "odd".

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;

    for (int n = a; n <= b; ++n)
    {
        if (n >= 1 && n <= 9)
        {
            // Print English representation for numbers 1 to 9
            string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            cout << words[n - 1] << endl;
        }
        else
        {
            // Check if number is even or odd for n > 9
            if (n % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }
}
