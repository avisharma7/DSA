#include <bits/stdc++.h>
using namespace std;

int CountdistinctSubsequence(int index, string s, set<string> &st, string &str)
{
  if (index == s.size())
  {
    st.insert(str);
    return 0;
  }

  str += s[index];
  CountdistinctSubsequence(index + 1, s, st, str); // pick condition

  str.pop_back();
  CountdistinctSubsequence(index + 1, s, st, str); // unpick

  return st.size();
}

int main()
{
  string s = "GFG";
  set<string> st;
  string str;
  int a = CountdistinctSubsequence(0, s, st, str);
  cout << a;
}
