#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
     int data;
     Node *next;
};

Node *head = new Node;

int size(Node *head)
{
     int count = 0;
     Node *n = head;

     while (n != NULL)
     {
          n = n->next;
          count++;
     }
     return count;
}
Node *insertion(Node *head, int val, int pos)
{
     if (pos < 0 || pos > size(head))
     {
          return head;
     }
     else
     {
          Node *ptr = head;
          Node *temp = new Node;
          temp->data = val;

          if (pos == 0)
          {

               head->data = val;
          }
          else
          {
               for (int i = 0; i < pos - 1; i++)
               {
                    ptr = ptr->next;
               }
               temp->next = ptr->next;
               ptr->next = temp;
          }
     }
     return head;
}
void print(Node *head)
{
     Node *n = head;

     while (n != NULL)
     {
          cout << n->data << "->";
          n = n->next;
     }
     cout << "NULL" << endl;
}

//Reversal of linked list using the method of new heads
Node *ReverseLL(Node *head)
{

     Node *RR = NULL;

     while (head != NULL)
     {
          Node *temp = head;
          head = head->next;

          temp->next = RR;
          RR = temp;
     }
     return RR;
}

//Insert an element x at a given position
Node *insertSort(Node *head, int val)
{

     Node *n = new Node;
     n->data = val;
     n->next = NULL;

     if (head == NULL || head->data > val)
     {
          n->next = head;
          head = n;
          return head;
     }
     else
     {
          Node *temp = head;

          while (temp->next != NULL && temp->next->data <= val)
          {
               temp = temp->next;
          }
          n->next = temp->next;
          temp->next = n;
     }
     return head;
}

Node *kReverse(Node *A, int B)
{

     if (A == NULL)
     {
          return NULL;
     }

     Node *head2;
     Node *tail = A;
     int count = 0;
     while (A != NULL && count < B)
     {
          Node *temp = A;
          A = A->next;

          temp->next = head2;
          head2 = temp;
          count++;
     }
     tail->next = kReverse(A, B);
     return head2;
}
void printset(set<int> a)
{
     for (auto i : a)
     {
          cout << (i) << " ";
     }
     cout << endl;
}
Node *removeDuplicate(Node *head)
{

     Node *cur = head; //Have a current pointer
     Node *after = NULL; //Have a next pointer

     while (cur != NULL) // until current pointer becomes null
     {
          after = cur->next; // Initilize the next pointer when you come to know current is not null

          while (after != NULL && cur->data == after->data) //while both current and after are equal
          {
               cur->next = after->next; // remove the link of the after pointer
               after = after->next; // shift the pointer
          }
          cur = after; // increment the current till the next to deleted pointer
     }
     return head;
}

Node* removeAllduplicates(Node* head) {
     set <int> elements;
     
}
int main()
{
     Node *first = new Node;
     Node *rev = new Node;

     first = insertion(first, 1, 0);
     first = insertion(first, 1, 1);
     first = insertion(first, 1, 2);
     first = insertion(first, 1, 3);
     first = insertSort(first, 2);
     first = insertSort(first, 2);
     // first = insertSort(first, 1);
     // print(first);
     // first = kReverse(first,2);
     print(first);

     first = removeDuplicate(first);
     print(first);
}