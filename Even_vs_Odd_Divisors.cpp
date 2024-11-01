#include <iostream>
using namespace std;

int countDivisors(int N, bool isEven) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) { 
            if (isEven && i % 2 == 0) count++; 
            if (!isEven && i % 2 != 0) count++; 
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        
        int evenDivisors = countDivisors(N, true);  
        int oddDivisors = countDivisors(N, false);  
        
        if (evenDivisors > oddDivisors) {
            cout << 1 << endl;
        } else if (evenDivisors == oddDivisors) {
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
