/*******************************************************************************************
****************************Cracking The Coding Interview Q 2.7 ****************************
Leet Code URL : https://leetcode.com/problems/intersection-of-two-linked-lists/#/description
*******************************************************************************************/


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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr1, *ptr2;
        int len1 = 0, len2 = 0, diff, count = 0;
        ptr1 = headA;
        ptr2 = headB;
        if(headA == NULL || headB == NULL)
            return NULL;
        while(ptr1)
        {
            ptr1 = ptr1->next;
            len1 ++;
        }
        while(ptr2)
        {
            ptr2 = ptr2->next;
            len2++;
        }
        if(ptr1 != ptr2)
            return NULL;
        diff = abs(len1 - len2);
        ptr1 = headA;
        ptr2 = headB;
        while( diff--)
        {
            if(len1 > len2)
                ptr1 = ptr1->next;
            else
                ptr2 = ptr2->next;
        }
    while(ptr1 && ptr2)
    {
        if(ptr1  == ptr2 ) 
        {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
            
    }
    return NULL;
    }
};