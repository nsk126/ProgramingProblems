#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define LOGL(X) cout << (X) << endl

// https://codeforces.com/problemset/problem/236/A

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;    

    sort(s.begin(), s.end());

    int count = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] != s[i - 1]) count++;
    }    

    (count) % 2 == 0 ? LOGL("IGNORE HIM!") : LOGL("CHAT WITH HER!");

    return 0;
}
