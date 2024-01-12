/*
Quick Sort is a sorting algorithm that follows divide and conquer paradigm. It is a two way process
1) partition : It means we take an element and put it at its right place
2) Recursion : solving one condition of putting pivot to its correct position and give rest of work to recursion to do
*/

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{

  // first we have to find the pivot index
  int pivot = arr[s];
  int count = 0;
  for (int i = s + 1; i <= e; i++)
  {
    if (arr[i] <= pivot)
    {
      count++;
    }
  }

  // placing pivot at the right place
  int pivotIndex = count + s;
  swap(arr[pivotIndex], arr[s]);

  // Now lets handle left and right sub array

  int i = s;
  int j = e;

  while (i <= pivotIndex && j >= pivotIndex)
  {
    while (arr[i] <= arr[pivotIndex])
    {
      i++;
    }
    while (arr[j] >= arr[pivotIndex])
    {
      j--;
    }

    if (i <= pivotIndex && j >= pivotIndex)
    {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }

  return pivotIndex;
}

void quickSort(vector<int> &arr, int s, int e)
{

  // base case
  if (s >= e)
  {
    return;
  }

  // finding partition
  int p = partition(arr, s, e);

  // quicksort on left part
  quickSort(arr, s, p - 1);

  // quicksort on right part
  quickSort(arr, p + 1, e);
}

int main()
{
  vector<int> arr = {2, 4, 1, 6, 9};
  int n = 5;
  quickSort(arr, 0, n - 1);

  // printing quick sort elements
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}