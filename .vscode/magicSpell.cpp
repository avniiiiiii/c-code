#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to find the length of the longest common subsequence between two strings IF THE SPELL IS NOT FAMILIAR//
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
        cout << "enter spell:";
        cin >> spell;
        cout << "enter power:";
        cin >> power; // Read spell name and power
        counterspell(spell, power);
    }
    return 0;
}
//______________________________________________BREAKING DOWN THE CODE_______________________________________________________________________//
// Reading Spells: Imagine the wizard is casting spells, and we need to figure out what each spell does. We first ask how many spells the wizard is going to cast (the number of scrolls).

// Identifying Spells: When the wizard casts a spell, we try to figure out what it does. If the wizard shouts out a spell name that we already know (like "Fireball"), we just say, "Ah, it's a Fireball spell!" and we also remember how strong it is (like, if it's very hot or not so hot). Then we write down the spell name and its power.

// Generic Spells: Sometimes the wizard doesn't shout out a spell name we know. Instead, he says something we're not familiar with, like "AquaVitaeAruTaVae". In this case, we try to see if any part of what he said is similar to something we know. If we find a part that's similar to our spell book, we try to find the longest piece that's the same in both the spell he cast and our spell book.

// Figuring it Out: We then shout out the longest piece that's the same as both the wizard's spell and our spell book. For example, if the wizard said "AruTaVae" and our spell book says "AquaVitae", we would say, "Hmm, those two sound similar!" and we'd tell the wizard how many letters they have in common.

// Finishing Up: We keep doing this for each spell the wizard casts until we've figured out all of them.

// So, basically, we listen carefully to what spells the wizard is saying. If it's a spell we know, we remember it. If it's something new, we try to find the most similar thing we already know and tell the wizard how similar they are!