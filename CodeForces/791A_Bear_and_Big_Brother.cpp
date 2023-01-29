#include <iostream>
#include <math.h>

using namespace std;

// https://codeforces.com/problemset/problem/791/A

int main(int argc, char const *argv[])
{

    int a,b; // wt of Limak and Bob
    cin >> a >> b;

    // find a * 3 > b * 2

    int iterator = 0;
    while(a <= b){
        a *= 3;
        b *= 2;
        iterator++;
    }

    cout << iterator << endl;
    
    return 0;
}
