/*************************************************************************
    > File Name: 反转链表.cpp
    > Author: CatalinChao
    > Mail: xcodemiuios@gmail.com 
    > Created Time: 一  3/ 6 19:35:20 2023
 ************************************************************************/
#include<iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
          if(head == nullptr || head->next == nullptr){
              return head;
          }
          ListNode* pre = nullptr;
          ListNode* tem;
          tem = head;
          while(head ->next != nullptr){
              tem = tem->next;
              head -> next = pre;
              pre = tem;

          }

    }
};



