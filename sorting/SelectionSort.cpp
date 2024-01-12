/*
Selection Sort:
-> Find the minimum element in the sorted array and swap it with the element at the beginning
-> The inner loop selects the element in the unosorted array
-> Specially used when the array size is small
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> arr = {3, 2, 5, 7, 3, 8, 3};

  cout << "Unsorted Array: ";
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < arr.size() - 1; i++)
  {
    int mini = i;
    for (int j = i + 1; j < arr.size(); j++)
    {
      if (arr[j] < arr[mini])
      {
        mini = j;
      }
    }
    swap(arr[i], arr[mini]);
  }

  cout << "Sorted Arrays:: ";
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}