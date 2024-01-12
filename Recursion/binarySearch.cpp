#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &vec, int s, int e, int key)
{
  int mid = s + (e - s) / 2;
  if (vec[mid] == key)
  {
    return true;
  }
  else if (vec[mid] > key)
  {
    binarySearch(vec, s, mid - 1, key);
  }
  else
  {
    binarySearch(vec, mid + 1, e, key);
  }
}

int main()
{
  vector<int> vec = {1, 2, 3, 4, 5};
  int s = 0;
  int e = vec.size() - 1;
  int key = 5;
  if (binarySearch(vec, s, e, key))
  {
    cout << "element is found";
  }
  else
  {
    cout << "element is not found";
  }
}