// https://vjudge.net/contest/666748#problem/D
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    string ans=to_string(t);
    while(ans.length()<4)
     {
        ans='0'+ans;
     }
     cout<<ans<<"\n";
}
int main()
{
  
     solve();
     return 0;
}