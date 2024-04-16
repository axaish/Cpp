#include <iostream>
#include <utility>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

std::pair<ListNode*, ListNode*> reverse(ListNode* head, ListNode* tail);

ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;
    
    while (head) {
        ListNode* tail = prev;
        for (int i = 0; i < k; ++i) {
            tail = tail->next;
            if (!tail) return dummy->next;
        }
        
        ListNode* next_group_head = tail->next;
        std::pair<ListNode*, ListNode*> reversed = reverse(head, tail);
        prev->next = reversed.first;
        prev = reversed.second;
        head = next_group_head;
    }
    
    return dummy->next;
}

std::pair<ListNode*, ListNode*> reverse(ListNode* head, ListNode* tail) {
    ListNode* prev = tail->next;
    ListNode* curr = head;
    while (prev != tail) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return std::make_pair(tail, head);
}

void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    
    int k = 2;
    
    std::cout << "Original list: ";
    printList(head);
    
    head = reverseKGroup(head, k);
    
    std::cout << "Modified list: ";
    printList(head);
    
    return 0;
}
