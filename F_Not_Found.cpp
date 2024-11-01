#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string Str;
    cin >> Str;
    bool acy[26] = {false};
    for (char c : Str) 
    {
        acy[c - 'a'] =1;
    }
    for (int i = 0; i < 26; i++) 
    {
        if (!acy[i]) 
        {
          cout << string(1,'a' + i) <<endl;
            return 0;
        }
    }
    cout << "None"<<endl;
    return 0;
}
