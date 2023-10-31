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

#define ISEVEN(x) x % 2 == 0   // is even
#define ISDIV(x, y) x % y == 0 // is divisile
#define ll long long
#define ISTRUE(x) x ? "YES\n" : "NO\n"
#define LOGN(x) cout << (x) << endl;

using namespace std;

// https://leetcode.com/problems/min-stack/

void print_vector(vector<int> vec);
void print_vector(vector<string> vec);
void solve();

class MinStack
{
public:
    MinStack()
    {
    }

    void push(int val)
    {
        mainstk.push(val);

        if (!minstk.empty())
        { //  if not empty
            val = min(val, minstk.top());
            minstk.push(val);
        }
        else
        {
            minstk.push(val);
        }
    }

    void pop()
    {
        mainstk.pop();
        minstk.pop();
    }

    int top()
    {
        return mainstk.top();
    }

    int getMin()
    {
        return minstk.top();
    }

private:
    stack<int> mainstk;
    stack<int> minstk;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main(int argc, char const *argv[])
{

    return 0;
}

void solve()
{
}

void print_vector(vector<int> vec)
{
    for (int x : vec)
        cout << x << " ";
    cout << endl;
}

void print_vector(vector<string> vec)
{
    for (string x : vec)
        cout << x << " ";
    cout << endl;
}