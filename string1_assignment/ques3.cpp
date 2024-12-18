//Check whether the given string is palindrome or not.
#include<iostream>
#include<algorithm>
using namespace std;
bool check(string &s) {
int i = 0, j = (int)s.size() - 1;
while (i <= j) {
if (s[i] != s[j]) return false;
i++, j--;
}
}
int main() {
int n;
cin >> n;
string s;
cin >> s;
cout << (check(s) ? "YES" : "NO");
}