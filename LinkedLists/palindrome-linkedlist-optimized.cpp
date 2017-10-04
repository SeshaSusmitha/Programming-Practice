/* Program URL : https://leetcode.com/problems/palindrome-linked-list/description/ 
Full program : /Users/NarenMudivarthy/Desktop/Interview prep/Programming-Practice
/LinkedLists/linkedlist-palindrome.cpp */

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
    bool isPalindrome(ListNode* head) {
        
    int count = 0, mid_value = 0;
	stack<int> mystack;
	ListNode *curr, *ptr;
	curr = head;
	ptr = head;
        
    if((head == NULL) || (head->next == NULL))
        return true;

	/* Finding length of list */
	while(curr){
		count++;
		curr = curr->next;
	}
   
    if((count == 2) && (head->val != head->next->val))
        return false;

	mid_value = count/2;

	curr = head;
	count = 0;
	while(curr != NULL){
        count++;;
		if(count != mid_value){
			break;
		}
		curr = curr->next;
	}
	while(curr->next){
		mystack.push(curr->next->val);
		curr = curr->next;
	}

	while((!mystack.empty()) && (ptr != curr)){
		if(ptr->val == mystack.top()){
			mystack.pop();
			ptr = ptr->next;
		}
		else{
			return false;
		}
	}

	return true;

}
        
    
};