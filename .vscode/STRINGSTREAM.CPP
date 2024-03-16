#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string s;
    cout << "enter your string:";
    cin >> s;
    int num;             // used to store numbers extracted from the input string.
    char ch;             // used to read characters from the input stream(,)
    stringstream ss(s);  // creates a stringstream object ss from the string s.
    ss >> num;           // extract number from ss and store it in num;
    cout << num << endl; // and will cout/print it
}