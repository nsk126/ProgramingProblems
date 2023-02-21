#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

#define ISEVEN(x) x % 2 == 0

using namespace std;

// https://codeforces.com/problemset/problem/977/A 

void print_vector(vector<int> vec);
void solve();

int main(int argc, char const *argv[])
{
    long int n, k;
    cin >> n >> k;

    while(k--){

        /* cout << "n = " << n << endl; */
        
        if(n<10){
             n--; 
             continue;     
        }
       
        if(n%10==0){
            n = n/10;
        }else{
            n-= 1;
        }
    }

    cout << n << endl;

    return 0;
}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}

