#include <iostream>

using namespace std;
/*
struct ListNode
{
	int val;
	ListNode * next;
	ListNode(): val(), next(nullptr){}
	ListNode(int x): val(x), next(nullptr){}
	ListNode(int x, ListNode * next): val(x), next(next){}
};
*/

class Solution
{
public:
	ListNode * sortList(ListNode *head){
		if(!head || !head->next)return head;
		ListNode * mid = Getmid(head);
		ListNode * Leftlist = sortList(head);
		ListNode * Rightlist = sortList(mid);
		return mergeTwolist(Leftlist,Rightlist);
	
	}
	
	ListNode * Getmid(ListNode *head){
		
		// Use fast pointer and slow pointer
		ListNode * fast = head->next;
		ListNode * slow = head;
		
		while(fast && fast->next){
			fast = fast->next->next;
			slow = slow->next;
		}
		
		ListNode * mid = slow->next;
		slow->next = nullptr;
		return mid;
		
	}
	
	ListNode * mergeTwolist(ListNode * Leftlist, ListNode * Rightlist){
		//iteration method 
		
		ListNode  head(0);
		ListNode * prehead = &head;
		
		/* alternative method 
		
		ListNode * head = new ListNode(-1);
		ListNode * prehead = head;
		
		*/
		
		while(Leftlist && Rightlist){
			if(Leftlist->val <= Rightlist->val){
				prehead->next = Leftlist;
				Leftlist = Leftlist->next;
			}else{
				prehead->next = Rightlist;
				Rightlist = Rightlist->next;
			}
			prehead = prehead->next;
		}
		prehead->next = Leftlist ==nullptr? Rightlist:Leftlist;
		return head.next;
	}
};
