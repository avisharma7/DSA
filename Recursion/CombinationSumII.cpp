/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.
Each number in candidates may only be used once in the combination.
Note: The solution set must not contain duplicate combinations.
Example 1:
Input: candidates = [10,1,2,7,6,1,5], target = 8
Output:
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
*/
// got memory limit exceed

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution
{
public:
  void findCombination(int index, int target, vector<int> &candidates, vector<vector<int>> &ans, vector<int> &ds)
  {
    // Base case
    if (index == candidates.size())
    {
      if (target == 0)
      {
        ans.push_back(ds); // ds is a valid combo
      }
      return;
    }

    // Picking condition
    if (target >= candidates[index])
    {
      ds.push_back(candidates[index]);
      findCombination(index + 1, target - candidates[index], candidates, ans, ds);
      ds.pop_back();
    }

    // Not picking condition
    findCombination(index + 1, target, candidates, ans, ds);
  }

  vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
  {
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0, target, candidates, ans, ds);

    // Sort each row individually
    for (auto &row : ans)
    {
      sort(row.begin(), row.end());
    }

    // Sort the entire vector of vectors
    sort(ans.begin(), ans.end());

    // Use a set to eliminate duplicates
    set<vector<int>> s(ans.begin(), ans.end());

    // Convert set back to vector
    vector<vector<int>> res(s.begin(), s.end());

    return res;
  }
};

int main()
{
  Solution solution;
  vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
  int target = 8;

  vector<vector<int>> result = solution.combinationSum2(candidates, target);

  // Print the result
  for (const auto &row : result)
  {
    cout << "[ ";
    for (int num : row)
    {
      cout << num << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}
