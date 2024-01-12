#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
  if (size == 0)
  {
    return false;
  }

  if (arr[0] == key)
  {
    return true;
  }
  else
  {
    bool remaining = linearSearch(arr + 1, size - 1, key);
    return remaining;
  }
}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int key = 5;
  int size = 5;
  bool b = linearSearch(arr, size, key);
  if (b)
  {
    cout << "key is found";
  }
}