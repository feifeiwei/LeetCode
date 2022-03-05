#include <iostream>
#include <list>
#include <algorithm>
#include <vector>


using namespace std;
using vecIter = vector<int>::iterator;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head;
        ListNode **tail = &head;
        
        while(list1 && list2){
            if (list1->val <= list2->val){
                *tail = new ListNode(list1->val);
                list1 = list1->next;
            }else{
                *tail = new ListNode(list2->val);
                list2 = list2->next;
            }
            
            tail = &(*tail)->next;
        }
        
        for(ListNode *leave=list1? list1:list2; leave ; leave=leave->next, tail=&(*tail)->next){
            *tail = new ListNode(leave->val);
        }
        
        
        return head;
        
    }

};


ListNode *createList(vecIter begin1, vecIter end1){
    ListNode *head = begin1==end1 ? NULL : new ListNode(*begin1++);
    
    for(ListNode* cur=head; begin1!=end1; cur=cur->next){
        cur->next = new ListNode(*begin1++);
    }
    return head;
}

void printListNode(ListNode *a){
    while(a){
        cout << a->val <<" ";
        a = a->next;
    }
}

void clear(ListNode *head)
{
    while (head)
    {
        ListNode *del = head;
        head = head->next;
        delete del;
    }
}


int main()
{
    
    vector<int> a = {1,2,3,4,5,6};
    vector<int> b = {1,5,6,8,9,12};
    ListNode *l1 = createList(a.begin(), a.end());
    ListNode *l2 = createList(b.begin(), b.end());
    
    printListNode(l1);
    cout <<"\n";
    printListNode(l2);
    cout <<"\n";
    
    Solution s;
    ListNode *res = s.mergeTwoLists(l1, l2);
    printListNode(res);
    
    clear(l1);
    clear(l2);
    clear(res);
    
    cout << endl;
 
   return 0;
}
