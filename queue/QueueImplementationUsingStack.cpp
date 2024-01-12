#include <bits/stdc++.h>

using namespace std;

struct Queue
{
  stack<int> input, output;

  // Push elements into the queue
  void Push(int data)
  {
    // Pop out all elements from the stack input
    while (!input.empty())
    {
      output.push(input.top());
      input.pop();
    }
    // Insert the desired element into the stack input
    cout << "The element pushed is " << data << endl;
    input.push(data);
    // Pop out elements from the stack output and push them into the stack input
    while (!output.empty())
    {
      input.push(output.top());
      output.pop();
    }
  }

  // Pop the element from the queue
  int Pop()
  {
    if (input.empty())
    {
      cout << "Queue is empty";
      exit(0);
    }
    int val = input.top();
    input.pop();
    return val;
  }

  // Return the topmost element from the queue
  int Top()
  {
    if (input.empty())
    {
      cout << "Queue is empty";
      exit(0);
    }
    return input.top();
  }

  // Return the size of the queue
  int size()
  {
    return input.size();
  }
};

int main()
{
  Queue q;
  q.Push(3);
  q.Push(4);
  cout << "The element popped is " << q.Pop() << endl;
  q.Push(5);
  cout << "The top of the queue is " << q.Top() << endl;
  cout << "The size of the queue is " << q.size() << endl;

  return 0;
}
