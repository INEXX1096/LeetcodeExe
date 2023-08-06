//

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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyNode = new ListNode(-1);
        dummyNode -> next = head;
        ListNode* prevNode = dummyNode;

        while ((head != nullptr) && (head->next != nullptr)){
            ListNode* firstNode = head;
            ListNode* secondNode = head->next;

            prevNode->next = secondNode;
            firstNode->next = secondNode->next;
            secondNode->next = firstNode;

            prevNode = firstNode;
            head = firstNode->next;
        }
        return dummyNode->next;
    }
};
