#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to find the length of the longest common subsequence between two strings
int longestCommonSubsequence(string s1, string s2)
{
    int m = s1.length();
    int n = s2.length();
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}

// Function to identify the type of spell and print its name and power
void counterspell(string spell, int power)
{
    // Your spell journal
    string spellJournal = "AquaVitaeAruTaVae";

    // Check if the spell matches any spell in the journal
    if (spellJournal.find(spell) != string::npos)
    {
        cout << spell << ": " << power << endl;
    }
    else
    {
        // Find the length of the longest common subsequence
        int longestSubsequence = longestCommonSubsequence(spell, spellJournal);
        cout << longestSubsequence << endl;
    }
}

int main()
{
    int n;
    cout << "enter n:";
    cin >> n; // Number of scrolls
    for (int i = 0; i < n; i++)
    {
        string spell;
        int power;
        cout << "enter spell:"
             << "enter power:" << endl;
        cin >> spell >> power; // Read spell name and power
        counterspell(spell, power);
    }
    return 0;
}
