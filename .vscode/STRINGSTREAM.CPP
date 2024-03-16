#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string s;
    cout << "enter your string:";
    // When you use cin >> s; to read a string from the user, it reads until the first whitespace character (space, tab, newline, etc.).
    getline(cin, s);     // Read the entire line of input
    int num;             // used to store numbers extracted from the input string.
    char ch = 0;         // used to read characters from the input stream(,)
    stringstream ss(s);  // creates a stringstream object ss from the string s.
    ss >> num;           // extract number from ss and store it in num;
    cout << num << endl; // and will cout/print it
    ss >> ch;
    // loop continues as long as the next character in the stringstream is a comma ,.
    while (ch == ',')
    {
        // 1)It extracts the next number from the stringstream.
        // 2)It prints the extracted number.
        // 3)It resets the value of ch to 0.
        // 4)It extracts the next character from the stringstream.
        ss >> num;
        cout << num << endl;
        ch = 0;
        ss >> ch;
    }
    return 0;
}