/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverseList(ListNode* head) {
        
        ListNode * curr = head;

        ListNode * rHead = nullptr;
        ListNode * tmpR = rHead;

        while(curr != nullptr){

            // putting each node at the "begining" of reversed-linked-list
            tmpR = rHead;
            rHead = new ListNode(curr->val);     
            rHead->next = tmpR;

            curr = curr->next;        // traverse next of "head"
        }


        return rHead;
    }
};