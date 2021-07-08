/*
This is an to practice traversing a linked list. Given a pointer to the head node of a linked list, print each node's  element, one per line. If the head pointer is null (indicating the list is empty), there is nothing to print.

Function Description

Complete the printLinkedList function in the editor below.

printLinkedList has the following parameter(s):

SinglyLinkedListNode head: a reference to the head of the list
Print

For each node, print its  value on a new line (console.log in Javascript).
Input Format

The first line of input contains , the number of elements in the linked list.
The next  lines contain one element each, the  values for each node.

Note: Do not read any input from stdin/console. Complete the printLinkedList function in the editor below.

Constraints

, where  is the  element of the linked list.
Sample Input

2
16
13
Sample Output

16
13
Explanation

There are two elements in the linked list. They are represented as 16 -> 13 -> NULL. So, the printLinkedList function should print 16 and 13 each on a new line.
*/

//Code :

 void printLinkedList(SinglyLinkedListNode *head)
{

     SinglyLinkedListNode *n = head;
     while (n != NULL)
     {
          cout << n->data << endl;
          n = n->next;
     }
}

/*
Given a pointer to the head of a linked list, insert a new node before the head. The  value in the new node should point to  and the  value should be replaced with a given value. Return a reference to the new head of the list. The head pointer given may be null meaning that the initial list is empty.

Function Description

Complete the function insertNodeAtHead in the editor below.

insertNodeAtHead has the following parameter(s):

SinglyLinkedListNode llist: a reference to the head of a list
data: the value to insert in the  field of the new node
Input Format

The first line contains an integer , the number of elements to be inserted at the head of the list.
The next  lines contain an integer each, the elements to be inserted, one per function call.

Constraints

Sample Input

5
383
484
392
975
321
Sample Output

321
975
392
484
383
Explanation

Intially the list in NULL. After inserting 383, the list is 383 -> NULL.
After inserting 484, the list is 484 -> 383 -> NULL.
After inserting 392, the list is 392 -> 484 -> 383 -> NULL.
After inserting 975, the list is 975 -> 392 -> 484 -> 383 -> NULL.
After inserting 321, the list is 321 -> 975 -> 392 -> 484 -> 383 -> NULL.*/

inglyLinkedListNode *insertNodeAtHead(SinglyLinkedListNode *llist, int data)
{

     SinglyLinkedListNode *n = new SinglyLinkedListNode(data);
     n->next = llist;
     llist = n;

     return llist;
}

/*
This challenge is part of a tutorial track by MyCodeSchool and is accompanied by a video lesson.

Given the pointer to the head node of a linked list and an integer to insert at a certain position, create a new node with the given integer as its  attribute, insert this node at the desired position and return the head node.

A position of 0 indicates head, a position of 1 indicates one node away from the head and so on. The head pointer given may be null meaning that the initial list is empty.

Example
 refers to the first node in the list 


Insert a node at position  with . The new list is 

Function Description Complete the function insertNodeAtPosition in the editor below. It must return a reference to the head node of your finished list.

insertNodeAtPosition has the following parameters:

head: a SinglyLinkedListNode pointer to the head of the list
data: an integer value to insert as data in your new node
position: an integer position to insert the new node, zero based indexing
Returns

SinglyLinkedListNode pointer: a reference to the head of the revised list
Input Format

The first line contains an integer , the number of elements in the linked list.
Each of the next  lines contains an integer SinglyLinkedListNode[i].data.
The next line contains an integer , the data of the node that is to be inserted.
The last line contains an integer .

Constraints

, where  is the  element of the linked list.
.*/


//Code:__amd64

SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *llist, int data, int position)
{
     SinglyLinkedListNode *ele = new SinglyLinkedListNode(data);

     if (position == 0)
     {
          ele->next = llist;
          llist = ele;
          return llist;
     }
     else
     {
          SinglyLinkedListNode *n = llist;
          for (int i = 0; i < position - 1; i++)
          {
               n = n->next;
          }
          ele->next = n->next;
          n->next = ele;
          return llist;
     }
}
