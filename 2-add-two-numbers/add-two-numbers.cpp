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
    vector<int> convert(ListNode* l1) {
        vector<int> nums;
        ListNode* current = l1;
        while (current != nullptr) {
            nums.push_back(current->val);
            current = current->next;
        }
        return nums;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> sum1 = convert(l1);
        vector<int> sum2 = convert(l2);
        vector<int> v;
        int i = 0, j = 0;
        int carry = 0;
        while (i < sum1.size() && j < sum2.size()) {

            int temp = sum1[i] + sum2[j] + carry;

            carry = temp / 10;
            v.push_back(temp % 10);

            i++;
            j++;
        }

        if (i == sum1.size()) {

            for (int k = j; k < sum2.size(); k++) {

                int temp = carry + sum2[k];

                carry = temp / 10;
                v.push_back(temp % 10);
            }
        }

        if (j == sum2.size()) {

            for (int k = i; k < sum1.size(); k++) {

                int temp = carry + sum1[k];

                carry = temp / 10;
                v.push_back(temp % 10);
            }
        }

        if (carry != 0) {
            v.push_back(carry);
        }
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        for (int digit : v) {
            ListNode* newNode = new ListNode(digit);
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head;
    }
};