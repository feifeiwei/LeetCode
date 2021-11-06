#include <iostream>
#include <vector>
#include<map>
#include <cstddef>
#include <cstdlib>

using namespace std;

 // Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *makeLinkedList(const std::initializer_list<int> lst){
    auto iter = lst.begin();

    ListNode * head = lst.size() ? new ListNode(*iter++) : nullptr;
    for (ListNode *cur=head; iter!=lst.end(); cur=cur -> next){
        cur->next = new ListNode(*iter++);
    }
    return head;
}


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    ListNode head(0);
    ListNode *tail = &head;

    for (div_t sum{0, 0}; sum.quot || l1 || l2; tail=tail->next){

        if (l1){sum.quot+=l1->val; l1 = l1->next; }
        if (l2){sum.quot+=l2->val; l2 = l2->next; }
        sum = div(sum.quot, 10);
        tail -> next = new ListNode(sum.rem);
    }

    return head.next;

    }
};




int main(){


    Solution s;
    ListNode *l1 = makeLinkedList({2,4,3});
    ListNode *l2 = makeLinkedList({5,6,4});
    ListNode *ret = s.addTwoNumbers(l1, l2);

    for (ListNode *cur = ret; cur; cur = cur->next)
        cout << cur->val << "->";
    cout << "\b\b  " << endl;

    cout <<"Making..."<<endl;
    return 0;
}


