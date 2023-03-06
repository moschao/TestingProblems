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
        ListNode* L;
        if(list1 == nullptr && list2 == nullptr){
            return list1;
        }
        if(list1 == nullptr){
            return list2;
        }
        if(list2 == nullptr){
            return list1;
        }

        ListNode* Lnode = new ListNode();
        L = Lnode;
        while(list1 != nullptr && list2 != nullptr){

            if(list1 -> val <= list2->val){
                Lnode->val = list1->val;
                std::cout << Lnode->val << std::endl;
                list1 = list1->next;
                ListNode* l = new ListNode;
                Lnode->next = l;
                Lnode  = Lnode->next;

            }else{    //list1的值大于list2的值
                Lnode->val = list2->val;
                std::cout << Lnode->val << std::endl;
                list2 = list2->next;
                ListNode* l = new ListNode;
                Lnode->next = l;
                Lnode  = Lnode->next;
            }


        }

        if(list1 == nullptr){
            while(list2!=nullptr){
                Lnode->val = list2->val;
                std::cout << Lnode->val<<std::endl;
                list2 = list2->next;
                ListNode* p = new ListNode;
                Lnode->next = p;
                L = L->next;

            }
        }

        if(list2 == nullptr){
            while(list1!=nullptr){
                Lnode->val = list1->val;
                std::cout << Lnode->val<<std::endl;

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
   ListNode* ptr1 = new ListNode();
   ListNode* ptr2 = ptr1;
   ptr1->val = 1;
   ptr1->next = new ListNode();
   ptr1 = ptr1->next;   //第一个结点

   ptr1->val = 2;
   ptr1->next = new ListNode();
   ptr1 = ptr1->next;    //第二个结点

   ptr1->val = 4;       //尾结点


   ListNode* ptr3 = new ListNode();
   ListNode* ptr4 = ptr3;
   ptr3->val = 1;
   ptr3->next = new ListNode();
   ptr3 = ptr3->next;   //第一个结点

   ptr3->val = 3;
   ptr3->next = new ListNode();
   ptr3 = ptr3->next;    //第二个结点

   ptr3->val = 4;       //尾结点




    ListNode* tem = Solution().mergeTwoLists(ptr2,ptr4);
//    while(tem!=nullptr){
//        std::cout << tem->val << std::endl;
//        tem = tem->next;
//
//    }

    return 0;

}