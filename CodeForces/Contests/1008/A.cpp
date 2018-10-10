#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

int main() {
  map<char, char> v = {{'a', 'a'}, {'e', 'e'}, {'i', 'i'}, {'o', 'o'}, {'u', 'u'}};
  string s; cin >> s;
  bool valid = true;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'n') continue;
    if (v.find(s[i]) == v.end() && i + 1 < s.length() && v.find(s[i + 1]) == v.end()) {
      valid = false;
    } else if (v.find(s[i]) == v.end() && i + 1 == s.length()) {
      valid = false;
    }
  }
  cout << (valid ? "YES" : "NO") << "\n";
}
