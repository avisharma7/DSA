#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  bool isIncreasing(const vector<int> &ds)
  {
    for (int j = 1; j < ds.size(); j++)
    {
      if (ds[j] <= ds[j - 1])
      {
        return false;
      }
    }
    return true;
  }

  void generateSubsequence(int index, int &maxlength, const vector<int> &nums, vector<int> &ds)
  {
    if (index == nums.size())
    {
      if (isIncreasing(ds))
      {
        int length = ds.size();
        maxlength = max(maxlength, length);
      }
      return;
    }

    ds.push_back(nums[index]);
    generateSubsequence(index + 1, maxlength, nums, ds);
    ds.pop_back();
    generateSubsequence(index + 1, maxlength, nums, ds);
  }

  int lengthOfLIS(const vector<int> &nums)
  {
    vector<int> ds;
    int maxlength = 0;
    generateSubsequence(0, maxlength, nums, ds);
    return maxlength;
  }
};

int main()
{
  Solution solution;
  // Example usage:
  vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
  int result = solution.lengthOfLIS(nums);
  cout << result;
  return 0;
}
