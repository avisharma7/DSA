// printing subsequenes sum to k
// logic is to avoid future recursion call

#include <bits/stdc++.h>
using namespace std;

bool printSubsequences(int k, int index, vector<int> &vec, vector<vector<int>> &res, vector<int> &ds)
{

  // base case:
  if (index >= vec.size())
  {
    // condition satisfied
    if (accumulate(ds.begin(), ds.end(), 0) == k)
    {
      res.push_back(ds);
      return true;
    }
    else
    {
      return false;
    }
  }

  ds.push_back(vec[index]); // pick condition
  if (printSubsequences(k, index + 1, vec, res, ds) == true)
  {
    return true;
  }

  ds.pop_back(); // not pick condition
  if (printSubsequences(k, index + 1, vec, res, ds) == true)
  {
    return true;
  }

  // if none of the recursion call returns true,  then return false
  return false;
}

int main()
{
  vector<int> vec = {17, 18, 6, 11, 2, 4};
  int k = 6;
  vector<vector<int>> res;
  vector<int> ds;
  printSubsequences(k, 0, vec, res, ds);
  for (auto it : res)
  {
    for (int i = 0; i < it.size(); i++)
    {
      cout << it[i] << " ";
    }
    cout << endl;
  }
}