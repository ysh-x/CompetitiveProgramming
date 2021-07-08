/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
The idea is to use two pointers, slow_ptr and fast_ptr.

Both pointers start from head of list.

The fast pointer moves two nodes at a time, while the slow pointer moves one node at a time.

When the fast pointer reaches the end of the list, the slow pointer reaches the middle.

Now we reduced two traversals to one. With some efficient implementation, we could delete in one traversal too. Can you do it now?

The additional thing in this post is to keep track of previous of middle so that we can delete middle.

Therefore, Create a new pointer prev to take care of the previous node to the middle element.

Initialize it as NULL and point its ‘next’ to slow_ptr.

Move both slow_ptr and prev one step at a time, while moving fast_ptr 2 steps at a time.

When slow_ptr reaches middle, prev will reach the previous node to middle.

Now, to delete the middle node, simply copy slow_ptr to a temporary node, change prev->next to slow_ptr->next and free(delete) the temp node.
*/


ListNode* Solution::solve(ListNode* A) {

    if(A==NULL){

        return NULL;

    }

    

    if(A->next==NULL){

        delete A;

        return NULL;

    }
    ListNode* fast = A;
    ListNode* slow = A;

    ListNode* prev;
    while(fast!=NULL && fast->next!=NULL){

        fast = fast->next->next;

        prev = slow;

        slow = slow->next;

    }

    

    prev->next = slow->next;

    delete slow;
    return A;
}
}