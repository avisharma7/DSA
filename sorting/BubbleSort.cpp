#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> arr = {3, 2, 5, 2, 6, 2, 7, 3};
  int n = arr.size();

  cout << "Original array:: ";
  for (int i = 0; i < n - 1; i++)
  {
    cout << arr[i] << " ";
  }
  for (int i = 0; i < n - 1; i++)
  { // for n elements, n-1 iterations needed
    for (int j = 0; j < n - i - 1; j++)
    { // each time one elements is being sorted and no need to go upto bcz
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  cout << endl;
  cout << "Sorted array: ";
  for (int i = 0; i < n - 1; i++)
  {
    cout << arr[i] << " ";
  }
}