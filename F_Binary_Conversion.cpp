#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        string s,a;
        cin>>s>>a;
        int x , y; x = y = 0;
        for(auto u:s)if(u=='0')x++;
        for(auto u:a)if(u=='0')y++;
        if(x!=y){
            cout<<"NO\n";
        }else{
            int d = 0;
            for(int i = 0; i<n; i++){
                if(s[i]!= a[i])d++;
            }
            if(n==2){
                if((s!=a && k%2 == 0) || (x == 1 && s==a && k%2 !=0))cout<<"NO\n";
                else cout<<"YES\n";
            }
            else if(d/2 <=k) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    
}