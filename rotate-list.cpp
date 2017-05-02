/**
 * https://leetcode.com/problems/rotate-list/#/description *
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *curr, *last, *temp;
        int length = 1;
        if(head == NULL || head->next == NULL||k==0) return head;
        curr = head;
        while(curr-> next != NULL)
        {
            length = length + 1;
            curr = curr->next;
        }
        curr->next = head;
        last = curr;
        k = k % length;
        k = length - k;
        temp = head;
        
        for(int i=0; i<k; i++)
        {
            last = temp;
            temp = temp->next;
        }
        
        
       last->next = NULL;
        return temp;
    }
};