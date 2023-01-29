#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

// https://codeforces.com/problemset/problem/339/A

int main(int argc, char const *argv[])
{
    string s;
    vector <int> thestack;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if(i % 2 == 0) thestack.push_back(int(s[i]) - 48); // tricky string to int conversion
    }

    sort(thestack.begin(), thestack.end(), greater<int>()); // descending sort

    for (int i = 0; i < s.size(); i++)
    {
        if(i % 2 == 0) {
            
            stringstream ss; // ss for str to int conversion

            ss << thestack.back();
            ss >> s[i];

            thestack.pop_back();
        
        }
    }

    cout << s << endl;

    return 0;
}
