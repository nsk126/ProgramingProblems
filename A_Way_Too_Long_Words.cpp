#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, i;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;

        if(word.length() > 10){
            
            string new_word = word[0] + to_string(word.length() - 2) + word[word.length() - 1];
            word = new_word; 
        }

        cout << word << endl;
    }
    
    return 0;
}
