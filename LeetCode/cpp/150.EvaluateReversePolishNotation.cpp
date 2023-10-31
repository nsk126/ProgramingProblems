#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <sstream>

#define ISEVEN(x) x % 2 == 0 // is even
#define ISDIV(x,y) x % y == 0 // is divisile
#define ll long long
#define ISTRUE(x) x ? "YES\n" : "NO\n"
#define LOGN(x) cout << (x) << endl;

using namespace std;

// https://leetcode.com/problems/evaluate-reverse-polish-notation/

void print_vector(vector<int> vec);
void print_vector(vector<string> vec);
void solve();

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> stk;

        for(auto token : tokens){
            // check if it is a digit

            // ascii check
            if(token.size() > 1 || isdigit(token[0])){
                // push ints to stack
                stk.push(stoi(token));
                continue;
            }

            // if not a digit - its a operation
            if(token == "+"){
                int op1 = stk.top();
                stk.pop();
                int op2 = stk.top();
                stk.pop();

                // calc
                stk.push(op2 + op1);
            }else if(token == "-"){
                int op1 = stk.top();
                stk.pop();
                int op2 = stk.top();
                stk.pop();

                // calc
                stk.push(op2 - op1);
            }else if(token == "*"){
                int op1 = stk.top();
                stk.pop();
                int op2 = stk.top();
                stk.pop();

                // calc
                stk.push(op1 * op2);
            }else if(token == "/"){
                int op1 = stk.top();
                stk.pop();
                int op2 = stk.top();
                stk.pop();

                // calc
                stk.push(op2 / op1);
            }

            // cout << "stk top: " << stk.top() << endl;
        }

        return stk.top();
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;

    vector<string> tokens = {"4","13","5","/","+"};
    int res = sol.evalRPN(tokens);
    cout << res << endl;
    return 0;
}

void solve(){

}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}

void print_vector(vector<string> vec){
    for(string x : vec)
        cout << x << " ";
    cout << endl;
}