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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head , *prev = NULL , *nxt = head;
        int sz = 0;
        while(temp){
            temp = temp -> next;
            sz++;
        }
        int idx = sz - n + 1 , i = 0;
        temp = head;
        
        while(nxt){
            nxt = temp -> next;
            i++;
            if(i == idx){
                if(i > 1) prev -> next = nxt;
                else head = head -> next;
                return head;
            }
            prev = temp;
            temp = nxt;
        }
        
        prev -> next = NULL;
        return head;
    }
};