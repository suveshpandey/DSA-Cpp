//Given an array of strings. Check whether they are anagram or not.
#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
vector<string> s(n);
for (auto &i : s) cin >> i;
bool ok = true;

for (int i = 0; i < n; i++) {
sort(s[i].begin(), s[i].end());
ok &= (s[i] == s[0]);
}
cout << (ok ? "YES" : "NO");
}