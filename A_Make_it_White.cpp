// https://codeforces.com/problemset/problem/1927/A
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int firstpositon=-1,lastposition=-1;
        firstpositon=s.find('B');
        lastposition=s.rfind('B');
        int ans=lastposition-firstpositon+1;
       cout<<ans<<"\n";
    }
    
    
}
int main()
{
    solve();
    return 0;
}