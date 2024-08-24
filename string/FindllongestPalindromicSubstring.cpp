#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool isPalindrome(const string &str)
  {
    int left = 0;
    int right = str.length() - 1;
    while (left < right)
    {
      if (str[left] != str[right])
      {
        return false;
      }
      ++left;
      --right;
    }
    return true;
  }

  string longestPalindrome(string s)
  {

    int maxSize = 0;
    int n = s.size();
    string ans = "";

    for (int i = 0; i < n; i++)
    {
      for (int j = i; j < n; j++)
      {
        string sub = s.substr(i, j - i + 1);
        if (isPalindrome(sub) && sub.size() > maxSize)
        {
          maxSize = sub.size();
          ans = sub;
        }
      }
    }
    return ans;
  }
};

int main()
{
  string str = "babad";
  Solution solution;
  string ans = solution.longestPalindrome(str);
  cout << ans;
}