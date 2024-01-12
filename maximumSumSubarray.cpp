#include <bits/stdc++.h>
using namespace std;

bool ifallNeg(vector<int> arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      return false;
    }
    return true;
  }
}

int main()
{
  int n;
  cin >> n;
  vector<int> ans;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    ans.push_back(a);
  }

  if (ifallNeg)
  {
    cout << *max_element(ans.begin(), ans.end());
  }

  int sum = 0;
  int maxsum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    sum += ans[i];
    maxsum = max(sum, maxsum);
  }
  cout << maxsum;
}
