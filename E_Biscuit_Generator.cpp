
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,t;
    cin>>a>>b>>t;
    int ET=t+0.5;
    int ans=0;
    for(int i=1;i*a<=ET;i++)
    {
        ans=ans+b;
    }
    cout<<ans<<endl;

}
int main()
{
    solve();
    return 0;
}