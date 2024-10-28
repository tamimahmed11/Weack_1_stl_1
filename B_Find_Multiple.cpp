// https://vjudge.net/contest/666748#problem/B
#include <iostream>
using namespace std;

int main() {
    int a,b,c,s;
    cin >>a>>b>>c;
    
     s = (a+c - 1) /c*c;
    
    if (s >= s && s <= b) {
        cout <<s<< endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
