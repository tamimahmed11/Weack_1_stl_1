// #include<bits/stdc++.h>
// using namespace std;
// int solve()
// {
//     int a,b;
//     cin>>a>>b;
//     int at=a+(a-1);
//     int bt=b+(b-1);
//     int a_b=a+b;
//     int maximum=max({at,bt,a_b});
//     cout<<maximum<<endl;
// }

// int main()
// {
//     solve();
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;


int main() {
    int A, B;
    cin >> A >> B;
    if (A < B)
    swap(A, B);

    int amax = A + (A - 1),bmax;
    // int bmax=B+B;
    if(A==B)
    {
          bmax=A+B;
    }
    // int bmax=B+B;
    int win=max({amax,bmax});
    cout <<win<<endl;
    return 0;
}
