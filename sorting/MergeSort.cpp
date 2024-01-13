/*
Merge sort is the fastest sorting algorithm among all the sorting algorithms
-> Divide and Conquer strategy
Divide the array -->Sort them using recursion-->merge sorted array using merge two sorted array concept
TC: divide(logn) + merge(n) = nlogn
Sc: o(N)
*/

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &vec, int s, int mid, int e)
{
  int left = s;
  int right = mid + 1;
  vector<int> temp;

  while (left <= mid && right <= e)
  {
    if (vec[left] < vec[right])
    {
      temp.push_back(vec[left]);
      left++;
    }
    else
    {
      temp.push_back(vec[right]);
      right++;
    }
  }

  while (left <= mid)
  {
    temp.push_back(vec[left]);
    left++;
  }

  while (right <= e)
  {
    temp.push_back(vec[right]);
    right++;
  }

  for (int i = s; i <= e; i++)
  {
    vec[i] = temp[i - s];
  }
}

void mergeSort(vector<int> &vec, int s, int e)
{
  if (s < e)
  {
    int mid = s + (e - s) / 2;
    mergeSort(vec, s, mid);
    mergeSort(vec, mid + 1, e);
    merge(vec, s, mid, e);
  }
}

int main()
{
  vector<int> vec = {3, 2, 5, 83, 4, 2, 4};
  int n = vec.size();
  mergeSort(vec, 0, n - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << vec[i] << " ";
  }

  return 0;
}
