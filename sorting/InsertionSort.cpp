/*
Insertion Sort
-> Take an element from the unsorted array
-> place it in it's correct position  in the sorted array
-> Shift the remaining elments accordingly
-> Start iterating outer for loop from the second index
-> The inner while shifts elements using swapping
-> NO. of elements 6: No of iterations = 5
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sort(vector<int> &vec)
{
  for (int i = 1; i < vec.size(); i++)
  {
    int current = vec[i];
    int j = i - 1;
    while (j >= 0 && vec[j] > current)
    {
      vec[j + 1] = vec[j];
      j--;
    }
    vec[j + 1] = current;
  }
  return vec;
}

int main()
{
  vector<int> vec = {5, 3, 2, 1, 2};
  sort(vec);
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << " ";
  }
}
