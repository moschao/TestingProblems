//
// Created by 方 on 2024/2/5.
//

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        vector<int> res;

        while(head != nullptr){
            res.push_back(head->val);
            head = head->next;
        }
        sort(res.begin(), res.end());

        ListNode* heads = new ListNode(res[0]);
        ListNode* current = heads;

        // 循环遍历数组元素，创建节点并连接
        for (int i = 1; i < res.size(); ++i) {
            current->next = new ListNode(res[i]);
            current = current->next;
        }

        return heads;
    }
};