# Program URL : https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/ 

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        
        curr = head;
        prev = curr;
        
        
        if head == None:
            return head
        
        data = curr.val;
        curr = curr.next;
        count = 1;
        while curr:
            if (curr.val == data):
                prev.next = curr.next
                curr = prev.next
            else:
                count = 1
                data = curr.val
                prev = curr
                curr = curr.next
        return head
        