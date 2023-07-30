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
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    // Create a new linked list to store the result 
    ListNode* Result = new ListNode(0);
    ListNOde* current = Result;
    int carr = 0;

    while(l1 != NULL || l2 != NULL || carr != 0){
      int x = l1? l1->val : 0;
      int y = l2? l2->val : 0;
      int sum = x + y + carr;

      carr = sum/10;
      current-> next = new ListNode (sum%10);
      current = current->next;

      l1 = l1? l1->next: nullptr;
      l2 = l2? l2->next: nullptr;
      
      
    }
    return Result->next
    
  }

}

// 主要的问题是应该考虑不同的链表长度
