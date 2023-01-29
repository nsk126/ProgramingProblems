#include <iostream>
#include <math.h>

using namespace std;

#define LOG(X) cout << X << endl

// https://codeforces.com/contest/1787/problem/A


int main(int argc, char const *argv[])
{
    int t; // testcases
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long n;
        cin >> n;

        if(n % 2 == 0){
            cout << 1 << " " << n/2 << endl;
        }else{
            cout << -1 << endl;
        }
    }
    
    return 0;
}

