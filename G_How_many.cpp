#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int x,y;
    cin >>x>>y;
    int cnt = 0;
    for (int a = 0; a <= x;a++) 
    {
        for (int b = 0; b <= x - a;b++)
         { 
            for (int c = 0; c <= x - a - b;c++) 
            {
                if (a * b * c <= y)
                 {
                    cnt++;
                }
            }
        }
    }
    cout <<cnt<< endl;
    return 0;
}
