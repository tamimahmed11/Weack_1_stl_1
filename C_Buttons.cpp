#include<bits/stdc++.h>
using namespace std;
int solve()
{
    int a,b;
    cin>>a>>b;
    int at=a+(a-1);
    int bt=b+(b-1);
    int a_b=a+b;
    int maximum=max({at,bt,a_b});
    cout<<maximum<<endl;
}

int main()
{
    solve();
    return 0;
}