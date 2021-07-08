#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node {
     int data ;
     Node * next ;
};

Node* head = new Node;
Node * create(int value) {
     int count = 1;
     int element;
     Node *head = new Node; // Creating the head node
     cout <<"Value " << count << " : " << endl;
     cin >> element;

     count++;
     head->data = element;
     head->next = NULL;

     Node * ptr = head; // Ptr is like the traversing node which helps to traverse the LL, Since head should not be altered
     while(count <= value) {
          Node * temp = new Node; // Creating a new body node
          //cout << "Value " << count << " : " << endl;
          //cin >> element;
          //temp->data = element; // Pushing data into the body node
          temp->data = count;
          temp->next = NULL; // Linking it to null
          ptr->next = temp; // Pointing the ptr to temp since ptr = head in the first iteration. In the upcoming iteration it will point to the tail node
          ptr = ptr->next; // Moving ptr to next node 
          count++;

     }
     return head;

}

int size(Node *head)
{
     Node *ptr = head;
     int size = 0;
     while (ptr != NULL)
     {
          ptr = ptr->next;
          size++;
     }
     return size;
}
void displayLL(Node *n) {
     cout <<"Contents of the linked list: " << endl;
     while(n!= NULL) {
          cout << n->data << "->";
          n = n->next;
     }
     cout << endl;
} 


Node * insertion(Node * head, int pos, int value) {
     
     if(pos < 0 || pos > size(head)) // Check if the linked list is within bounds
     return head; // if it is not, return the actual linked list
     else {
          Node * n = new Node; // Create a new node and push the given element
          n->data = value;

          //Two cases may arise, if you want to push the element as head or in between
          if(pos == 0) {
               n->next = head; // if you want to push it in head, then first make the new node point to head
               head = n; // and make the new node as the head itself
          }
          else { // if not, traverse till the previous position
               Node * ptr = head;
               for(int i = 1; i < pos; i++) {
                    ptr = ptr-> next;
               }
               n->next = ptr->next; // make the new node node point to the next to next element 
               ptr->next = n; // and make the current node point to the new node
          }
     }
     return head;
}
Node *deletion(Node *head, int pos)
{
     if (pos < 0 || pos > size(head)) // Check if the linked list is within bounds
          return head;                // if it is not, return the actual linked list
     else
     {
          if(pos == 0) { // if the pos is zero
               head = head->next; // substitute the next node as the head node
          }
          else {
               Node * ptr = head;
               for(int i = 1; i < pos; i++) { // else travsse to until the previous node
                    ptr = ptr->next;
               }
               Node * temp = ptr->next; // create a node for it
               ptr->next = ptr->next->next; // point the prev node to next to next node so as to break the link with current node
               delete(temp); // delete current node

          }
     }
     return head;
}
Node* deleteFromBackSize(Node* A, int B) {
     int N = size(A);

     if (N == 0 || N == 1)
     {
          A = A->next;
          return A;
     }
     if (B > N)
     {
          A = A->next;
          return A;
     }
     else
     {
          int pos = N - B;
          if (N - B == 0)
          {
               A = A->next;
               return A;
          }
          Node *ptr = A;
          for (int i = 1; i < pos; i++)
          {
               ptr = ptr->next;
          }
          Node *tempo = ptr->next;
          ptr->next = ptr->next->next;
          delete (tempo);
     }
     return A;
}
Node * deleteFromBack(Node * head, int pos){
     if (pos < 0 || pos > size(head)) // Check if the linked list is within bounds
          return head;                // if it is not, return the actual linked list

     Node * ptr = head;
     for(int i = 0; i < pos; i++) { // Traverse till pos-1 and make the ptr stay there
          ptr = ptr->next;
     }

    Node * ptr2 = head; //Make another pointer

     while(ptr->next != NULL) { // Loop until the tail
          ptr2 = ptr2->next;
          ptr = ptr->next;

     }
     //the difference between ptr and ptr 2 is pos size, therefore it automaticaly becomes N - pos
     Node * temp = ptr2->next;
     ptr2->next = ptr2->next->next;
     delete(temp);

     return head;
}

Node* deleteMiddleNode(Node* A) {
     int pos = size(A);
     if (pos == 1)
     {
          Node *temp = new Node;
          return temp;
     }

     pos = pos / 2;
     Node *ptr = A;
     for (int i = 1; i < pos; i++)
     {
          ptr = ptr->next;
     }
     Node *temp = ptr->next;
     ptr->next = ptr->next->next;
     delete (temp);

     return A;
}

Node* deleteMiddleNodeOP(Node* A) {

     //Have three node pointers fast slow and prev
     //Fast is to fast forward 2 nodes, while slow moves one. By the time fast hits the end, slow hits the middle
     //We need previous pointer to store the previous node link
     //thus prev becomes past slow
     //then we link the previous-> next to slow of next to make a link then delete slow
     Node *fast = A;
     Node *slow = A;
     Node* prev;
     
     while (fast != NULL && fast->next != NULL)
     {
               fast = fast->next->next;
               prev = slow;
               slow = slow->next;
     }

     prev->next = slow->next;
     delete slow;
     return A;
}
int main()
{
     Node *first = new Node;

     first = create(7);
     displayLL(first);
     cout << "Size of the linked list is : " << size(first);
     cout << endl << endl;

     // first = insertion(first,1,1250);
     // displayLL(first);

     // first = deletion(first,4);
     // displayLL(first);

     first = deleteFromBack(first,3);
     displayLL(first);

     // first = deleteMiddleNodeOP(first);
     // displayLL(first);
     return 0;
}
