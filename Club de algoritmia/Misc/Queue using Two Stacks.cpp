#include <bits/stdc++.h>
using namespace std;
int main() {
  long int t, q, n, aux;
  stack<long int> s1;
  stack<long int> s2;
  cin >> t;
  while (t--) {
    cin >> q;
    if (q == 1) {
      cin >> n;
      s1.push(n);
    }
    else if (q == 2) {
      if (s1.size() > 0 || s2.size() > 0) {
        if (s2.size() == 0 && s1.size() > 0) {
          while (s1.size() > 0) {
            aux = s1.top();
            s1.pop();
            s2.push(aux);
          }
        }
        if (s2.size() > 0) {
          s2.pop();
        }
      }
    }
    else if (q == 3) {
      if (s1.size() > 0 || s2.size() > 0) {
        if (s2.size() == 0 && s1.size() > 0) {
          while (s1.size() > 0) {
            aux = s1.top();
            s1.pop();
            s2.push(aux);
          }
        }
        if (s2.size() > 0) {
          aux = s2.top();
          cout << aux << endl;
        }
      }
    }
  }
}
