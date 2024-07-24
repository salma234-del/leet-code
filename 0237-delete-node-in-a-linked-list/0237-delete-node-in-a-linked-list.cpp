/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curr = node;
        int c = 0;
        ListNode *temp;
        while(curr -> next){
            ListNode* nxt = curr -> next;
            int a = curr -> val, b = nxt -> val;
            curr -> val = b;
            nxt -> val = a;
            curr = curr -> next;
            c++;
            temp = curr;
        }
        
       ListNode* curr2 = node;
       int idx = 0;
       while(curr2){
           if(idx == c - 1){
               curr2 -> next = NULL;
               break;
           }
         idx++;
         curr2 = curr2 -> next;
       }
    }
};