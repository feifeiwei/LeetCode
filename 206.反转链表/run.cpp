//
//  main.cpp
//  data_structure_cpp
//
//  Created by feifeiwei on 2022/2/10.
//

#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include<queue>


using namespace std;
using vectorIter = vector<int>::iterator;


struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode * createListNode(vectorIter begin, vectorIter end){
    ListNode* head = begin == end ? nullptr : new ListNode(*begin++);
    
    for (ListNode* cur=head; begin!=end; cur=cur->next){
        cur->next = new ListNode(*begin++);
    }
    return head;
}

void printListNode(ListNode * temp){
    while(temp){
        cout << temp->val <<" " ;
        temp = temp->next;
    }
    cout << endl;
    
}


void clear(ListNode * temp){
    while(temp){
        ListNode* del = temp;
        temp = temp->next;
        delete del;
    }
}


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};



int main()
{

    vector<int> a = {5, 4, 3, 2, 1};
    ListNode* m = createListNode(a.begin(), a.end());
//    printListNodeAddr(m);
    printListNode(m);
    Solution s;
    ListNode* r = s.reverseList(m);
    printListNode(r);
    
    
   return 0;
}
