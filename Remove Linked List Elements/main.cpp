#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void print(ListNode *head)
{
    if(head == nullptr) {
        std::cout << "Empty List\n";
    }
    while(head)
    {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << '\n';
}

ListNode *removeElements(ListNode *head, int val) {
    if  (head == nullptr) {
        return head;
    }
    if(head->val == val) {
        ListNode *temp = head->next;
        head->next = nullptr;
        delete(head);
        return removeElements(temp, val);
    }
    head->next = removeElements(head->next, val);
    return head;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    int val = 2;
    print(removeElements(head , val));
    return 0;
}
