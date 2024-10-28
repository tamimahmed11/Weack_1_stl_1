// https://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   cin >> n;
   deque<int> dq(n);
   for (int i = 0;i < n;i++) {
      cin >> dq[i];
   }

   int Seraja = 0, Dima = 0, who = 1;
   while (!dq.empty()) {
      int left = dq.front(), right = dq.back(),mx;
      mx = max(left, right);
      if (who % 2 != 0) {
         Seraja+= mx;
      }
      else {
         Dima += mx;
      }

      if (mx == left) {
         dq.pop_front();
      }
      else {
         dq.pop_back();
      }
      who++;
   }

   cout <<Seraja<< " " << Dima<< '\n';
   return 0;
}