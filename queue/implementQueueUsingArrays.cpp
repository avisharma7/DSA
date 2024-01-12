#include <bits/stdc++.h>
using namespace std;

class queueImp
{

  int *arr;
  int front;
  int rear;
  int count;
  int maxsize;

public:
  queueImp()
  {
    arr = new int[16];
    front = 0;
    rear = 0;
    count = 0;
    maxsize = 16;
  }

  void push(int ele)
  {
    if (count < maxsize)
    {
      arr[rear] = ele;
      rear++;
    }
  }

  int pop()
  {
    int a = arr[front];
    front++;
    return a;
  }

  int top()
  {
    int a = arr[front];
    return a;
  }

  int size()
  {
    return count;
  }
};

int main()
{
  queueImp q(6);
  q.push(4);
  ṇ
      q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.size() << endl;

  return 0;
}