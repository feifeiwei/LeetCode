//
//  main.cpp
//  leetcode_learn
//
//  Created by feifeiwei on 2022/4/29.
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
    ListNode* swapPairs(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* pre = dummy;
        
        while( head!=nullptr && head->next != nullptr){
            ListNode* first = head;
            ListNode* second = head->next;
                
            // swap
            pre->next = second;
            first->next = second->next;
            second->next = first;
            
            pre = first;
            head = first->next;
        }
        delete dummy;
        return dummy->next;
    }
};


int main()
{

    vector<int> a = {5, 4, 3, 2, 1,0};
    ListNode* m = createListNode(a.begin(), a.end());
    printListNode(m);
    
    Solution s;
    ListNode* res = s.swapPairs(m);
    printListNode(res);
    

   return 0;
}
