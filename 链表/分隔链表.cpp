/*************************************************************************
    > File Name: 分隔链表.cpp
    > Author: CatalinChao
    > Mail: xcodemiuios@gmail.com 
    > Created Time: 日  3/12 13:42:35 2023
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* p1 = new ListNode();    //小于等于x的链表
        ListNode* p2 = new ListNode();    //大于等于x的链表

        //p1和p2要往下滑动
        ListNode* dummy1 = p1;
        ListNode* dummy2 = p2;

        while(head!=nullptr) {
            if(head->val < x) {
                p1->next = head;
                p1 = p1->next;
            }else{
                p2->next = head;
                p2 = p2->next;
            }
            //断开原来链表中的每个节点的next指针
            ListNode* temp = head->next;
            head->next = nullptr;
            head = temp;
        }
        //链接两个链表
        p1->next = dummy2->next;
        return dummy1->next;


    }
};