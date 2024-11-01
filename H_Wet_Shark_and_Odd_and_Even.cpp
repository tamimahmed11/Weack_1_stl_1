#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
   vector<int>dig(n);

    long long sum = 0;
    int exponetial = 1e9 + 1;

    for (int i = 0; i < n; i++) 
    {
        cin >>dig[i];
        sum=sum+dig[i];
        if (dig[i] % 2 != 0 && dig[i] < exponetial) 
        {
            exponetial = dig[i];
        }
    }
    if (sum %2 == 0) 
    {
        cout <<sum <<endl;
    }
    else 
    {
        cout << sum-exponetial <<endl;
    }

    return 0;
}
