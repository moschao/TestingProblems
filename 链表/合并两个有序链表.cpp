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
        // if (list1 == nullptr) {
        // 	return list2;
        // }

        // if (list2 == nullptr) {
        // 	return list1;
        // }


        // if (list1->val <= list2->val) {
        //     list1->next = mergeTwoLists(list1->next, list2);
        //     return list1;
        // }
        // else {
        //     list2->next = mergeTwoLists(list1, list2-> next);
        //     return list2;
        // }
        ListNode* L = new ListNode();
        ListNode* pre = L;

        if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                pre->next = list1;
                pre = pre->next;
                list1 = list1->next;
            }
            else {
                pre->next = list2;
                pre = pre->next;
                list2 = list2->next;
            }
        }
        if (list1 == nullptr) {
            pre->next = list2;
        }
        if (list2 == nullptr) {
            pre->next = list1;
        }

        return L->next;


    }
};
