#include <iostream>
#include <vector>
using namespace std;

void subsequence(int i, vector<int> &vec, vector<int> &ds, vector<vector<int>> &ans, int n)
{
  // base case
  if (i == n)
  {
    ans.push_back(ds);
    return;
  }

  // picking
  ds.push_back(vec[i]);
  subsequence(i + 1, vec, ds, ans, n);

  // non-picking
  ds.pop_back();
  subsequence(i + 1, vec, ds, ans, n);
}

int main()
{
  vector<int> vec = {1, 2, 3};
  int n = vec.size();
  vector<vector<int>> ans;
  vector<int> ds;
  subsequence(0, vec, ds, ans, n);

  for (auto it : ans)
  {
    cout << "[";
    for (auto num : it)
    {
      cout << num << " ";
    }
    cout << "]";
  }

  return 0;
}
