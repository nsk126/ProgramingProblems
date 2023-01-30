#include <iostream>
#include <string>

using namespace std;

// https://codeforces.com/contest/1790/problem/A

#define M_PI "314159265358979323846264338327"

int solve(string s){

    string mpi = M_PI;
    int resPI = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(mpi[i] == s[i]){
            resPI++;
        }else{
            break;
        }
    }

    return resPI;
}

int main(int argc, char const *argv[])
{

    int tcase;
    cin >> tcase;

    for (int i = 0; i < tcase; i++)
    {
        string s;
        cin >> s;

        int res = solve(s);
        cout << res << endl;
    }
        
    return 0;
}
