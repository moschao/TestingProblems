/*************************************************************************
    > File Name: 合并两个有序链表.cpp
    > Author: CatalinChao
    > Mail: xcodemiuios@gmail.com 
    > Created Time: 三  3/ 1 21:30:42 2023
 ************************************************************************/
#include <iostream>

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
//        ListNode* ptr1 = list1;
//        ListNode* ptr2 = list2;
//        ListNode* ptr = nullptr;
        ListNode* L = nullptr;
        if(list1 == nullptr && list2 == nullptr){
            return list1;
        }
        if(list1 == nullptr){
            return list2;
        }
        if(list2 == nullptr){
            return list1;
        }

        ListNode* Lnode = new ListNode;
        L = Lnode;
        while(list1 != nullptr && list2 != nullptr){

            if(list1 -> val <= list2->val){
                Lnode->val = list1->val;
                list1 = list1->next;
                ListNode* l = new ListNode;
                Lnode->next = l;
                Lnode  = Lnode->next;

            }else{
                Lnode->val = list2->val;
                list2 = list2->next;
                ListNode* l = new ListNode;
                Lnode->next = l;
                Lnode  = Lnode->next;
            }


        }

        if(list1 == nullptr){
            while(list2!=nullptr){
                Lnode->val = list2->val;
                list2 = list2->next;
                ListNode* p = new ListNode;
                Lnode->next = p;
                L = L->next;

            }
        }

        if(list2 == nullptr){
            while(list1!=nullptr){
                Lnode->val = list1->val;
                list1 = list1->next;
                ListNode* p = new ListNode;
                Lnode->next = p;
                L = L->next;

            }
        }
        return L;

    }
};

int main(){
    ListNode* ptr1 = new ListNode;
    ListNode* ptr = nullptr;
    ptr = ptr1;
    ptr1->val = 1;
    ListNode* pp = new ListNode;
    ptr1 -> next = pp;
    ptr1 = ptr1-> next;
    ptr1 -> val = 2;
    ptr1-> next = new ListNode;
    ptr1 = ptr1 -> next;
    ptr1->val = 4;
    ptr1->next = nullptr;

    ListNode* ptrO = nullptr;
    ListNode* ptrP = nullptr;

    ptrP = ptrO;
    ptrO = new ListNode;
    ptrO->val = 1;
    ptrO->next = new ListNode;
    ptrO->val = 3;
    ptrO = ptrO->next;
    ptrO->val = 4;
    ptrO->next = nullptr;
    ListNode* tem = Solution().mergeTwoLists(ptr,ptrP);
    while(tem!=nullptr){
        std::cout << tem->val << std::endl;

    }

    return 0;

}