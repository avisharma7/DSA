// finding ceil of the element in an array
#include <bits/stdc++.h>
using namespace std;

int findCeil(vector<int> &vec, int s, int e, int k, int res)
{
  while (s <= e)
  {
    int mid = s + (e - s) / 2;
    if (vec[mid] == k)
    {
      return mid;
    }
    else if (vec[mid] > k)
    {
      e = mid - 1;
      res = mid;
    }
    else
    {
      s = mid + 1;
    }
  }
  return res;
}

int main()
{
  vector<int> vec = {2, 3, 4, 6, 7, 8};
  int s = 0;
  int e = vec.size() - 1;
  int k = 5;
  int res = -1;
  cout << findCeil(vec, s, e, k, res);
}