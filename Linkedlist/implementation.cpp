#include <iostream>
using namespace std;

class Node
{

public:
  int data;
  Node *next;

  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

// insert at head
void insertAtHead(Node *&head, int d)
{
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}
// insert at tail
void insertAtTail(Node *tail, int d)
{
  Node *temp = new Node(d);
  tail->next = temp;
  tail = temp;
}

// insert at position

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{

  // insert at start
  if (position == 1)
  {
    insertAtHead(head, d);
    return;
  }

  // insert at last position
  Node *temp = head;
  int cnt = 1;

  while (cnt < position - 1)
  {
    temp = temp->next;
    cnt++;
  }

  if (temp->next == NULL)
  {
    insertAtTail(tail, d);
    return;
  }
}

// printing the ll
void print(Node *&head)
{
  if (head == NULL)
  {
    cout << "the list is empty";
  }

  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main()
{
  Node *node1 = new Node(2);
  cout << node1->data << endl;
  cout << node1->next;

  // head pointed to node1
  Node *head = node1;

  // tail pointed to node1;
  Node *tail = node1;
}