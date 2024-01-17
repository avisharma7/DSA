// generate all the unique permutation of the vector

#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution
{
public:
  void findPermutation(vector<int> &arr, int n, set<vector<int>> &ans, vector<int> &ds, vector<int> &freq)
  {
    // Base case:
    if (ds.size() == n)
    {
      ans.insert(ds);
      return;
    }

    for (int i = 0; i < n; i++)
    {
      if (freq[i] == false)
      {
        ds.push_back(arr[i]);
        freq[i] = true;
        findPermutation(arr, n, ans, ds, freq);
        freq[i] = false;
        ds.pop_back();
      }
    }
  }

  vector<vector<int>> uniquePerms(vector<int> &arr, int n)
  {
    set<vector<int>> ans;
    vector<int> ds;
    vector<int> freq(n, false);
    findPermutation(arr, n, ans, ds, freq);
    vector<vector<int>> res(ans.begin(), ans.end());
    return res;
  }
};

int main()
{
  Solution solution;

  // Example usage:
  vector<int> inputVector = {1, 2, 3};
  int size = inputVector.size();

  vector<vector<int>> result = solution.uniquePerms(inputVector, size);

  // Displaying the result
  for (const auto &perm : result)
  {
    cout << "[ ";
    for (int num : perm)
    {
      cout << num << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}
