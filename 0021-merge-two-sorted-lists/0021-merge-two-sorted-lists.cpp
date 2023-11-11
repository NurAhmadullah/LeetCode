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

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr){
            return list2;
        }
        if(list2 == nullptr){
            return list1;
        }
        
        ListNode * sortedList = nullptr;

        if(list1->val < list2->val){
            sortedList = new ListNode(list1->val);
            list1 = list1->next;
        }
        else{
            sortedList = new ListNode(list2->val);
            list2 = list2->next;
        }

        ListNode * sortedTmp = sortedList;

        while(true){
            if(list1 != nullptr && list2 != nullptr){
                if(list1->val < list2->val){
                    sortedTmp->next = new ListNode(list1->val);
                    list1 = list1->next;
                }
                else{
                    sortedTmp->next = new ListNode(list2->val);
                    list2 = list2->next;
                }
            }
            else if(list1 != nullptr){
                sortedTmp->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            else if(list2 != nullptr){
                sortedTmp->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            else{
                break;
            }

            sortedTmp = sortedTmp->next;
        }

        return sortedList;
    }
};