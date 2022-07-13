#include <iostream>

using namespace std;

struct ListNode
{
  int val;
  ListNode * next;
  ListNode(): val(0), next(nullptr){}
  ListNode(int x): val(x), next(nullptr){}
  ListNode(int x, ListNode * next): val(x), next(next){}
};


//iteration method
class Solution
{
public:
  ListNode * mergeTwoList(ListNode * list1, ListNode * list2){
    ListNode * head = new ListNode(-1);
    ListNode * prehead = head;
    
    while(list1 != nullptr && list2 != nullptr){
      if(list1->val <= list2->val){
        prehead->next = list1;
        list1 = list1->next;
      }else{
        prehead->next = list2;
        list2 = list2->next;
      }
      prehead = prehead->next;
    }
    prehead->next = list1 == nullptr? list2:list1;
    return head->next;
  }
};

//recursion method
class Solution
{
public:
   ListNode * mergeTwoList(ListNode * list1, ListNode * list2){
     
     if(list1 == nullptr){
       return list2;
     }else if(list2 == nullptr){
        return list1;
     }else if(list1->val <= list2->val){
       list1->next = mergeTwoList(list1->next,list2)
         return list1;   
     }else if (list1->val > list2->val){
        list2->next = mergeTwolist(list1,list2->next)
          return list2;
     }
   }
};
