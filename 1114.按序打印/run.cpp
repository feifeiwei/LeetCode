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


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        for(ListNode* cur=head; head && cur->next; ){
            if(cur->val == cur->next->val){
                ListNode* del = cur->next;
                cur->next = del->next;
                delete del;
            }else{
                cur = cur->next;
            }
        }
        return head;
    }
};


int main()
{
    
    vector<int> a = {1,2,2,2,3,4,5,5,6};
    ListNode *l1 = createList(a.begin(), a.end());
    
    printListNode(l1);
    cout <<"\n";
    
    Solution s;
    ListNode* res = s.deleteDuplicates(l1);
    printListNode(res);
    
    cout << endl;
 
   return 0;
}
