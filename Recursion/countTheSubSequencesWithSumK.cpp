// Count subsequeunces sum to k

#include <bits/stdc++.h>
using namespace std;

void printSubsequences(int &count, int k, int index, vector<int> &vec, vector<vector<int>> &res, vector<int> &ds)
{
  // base case:
  if (index >= vec.size())
  {
    if (accumulate(ds.begin(), ds.end(), 0) == k)
    {
      res.push_back(ds);
      count++;
    }
    return;
  }

  ds.push_back(vec[index]); // pick condition
  printSubsequences(count, k, index + 1, vec, res, ds);

  ds.pop_back(); // not pick condition
  printSubsequences(count, k, index + 1, vec, res, ds);
}

int main()
{
  vector<int> vec = {17, 18, 6, 11, 2, 4};
  int k = 6;
  int count = 0;
  vector<vector<int>> res;
  vector<int> ds;
  printSubsequences(count, k, 0, vec, res, ds);
  cout << count;
}