/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v; // Change to store binary representation of each node's 'val'
        for (ListNode* cur = head; cur ; cur = cur->next) {
            v.push_back(cur->val); // Push 'cur->val' into the vector
        }

        int x = 0;
        for (int i = 0; i < v.size(); i++) {
            x = x * 2 + v[i]; // Use the correct vector 'v' here
        }
        return x;
    }

};