#include<iostream>
using namespace std;

struct Node {
     int data = -1;
     Node* next  = NULL ;
};


Node* head = new Node;

void print_ll()
{
     // Output each element followed by a space
     Node *n = head;
     while (n != NULL)
     {
          cout << n->data << "->";
          n = n->next;
     }
     cout << endl << endl;
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
void insert_node(int position, int value) {
    // @params position, integer
    // @params value, integer
          Node * n = new Node; // Create a new node and push the given element
          n->data = value;
          n->next = NULL;

          //Two cases may arise, if you want to push the element as head or in between
          if(position == 1) {
               head->data = value; // if you want to push it in head, then first make the new node point to head
               head->next = NULL;
          }

          else { // if not, traverse till the previous position
               Node * ptr = head;
               for(int i = 2; i < position; i++) {
                    ptr = ptr-> next;
               }
               
               n->next = ptr->next; // make the new node node point to the next to next element 
               ptr->next = n; // and make the current node point to the new node
          }
    
}
void insert_at_tail(int data) {
     Node *n = head;
     Node *temp = new Node;

     temp->data = data;
     temp->next = NULL;

     while (n->next != NULL)
     {
          cout << n->data << " ";
          n = n->next;
     }

      //temp->next = n->next;
      n->next = temp;

     // print_ll();
}
void delete_node(int position) {
    // @params position, integer
          if(position == 1) { // if the pos is zero
               head = head->next; // substitute the next node as the head node
          }
          else {
               Node * ptr = head;
               for(int i = 2; i < position; i++) { // else travsse to until the previous node
                    ptr = ptr->next;
               }
               Node * temp = ptr->next; // create a node for it
               ptr->next = ptr->next->next; // point the prev node to next to next node so as to break the link with current node
               delete(temp); // delete current node

          }
}



int main() {
     insert_node(1,21);
     insert_node(2,22);
     insert_node(3, 23);
     insert_node(4, 23);
     insert_node(5, 23);
     insert_node(6, 23);
     insert_node(7, 23);
     print_ll();

     
     insert_at_tail(99);
     print_ll();

     //delete_node(3);
     //print_ll();
}
