1. Find the middle of the Linked List.
2. Then break the list from the middle.
3. Reverse the second half.
4. After that, compare the first half and the second half of the Linked List.

bool isPalindrome(Node* head) {
        if (head == NULL || head->next == NULL)
            return true;

        Node* slow = head;
        Node* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* ptr = slow->next;
        slow->next = NULL;
        Node* curr2 = reverse(ptr);
        Node* curr1 = head;

        while (curr1 != NULL && curr2 != NULL) {
            if (curr1->val != curr2->val)
                return false;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        return true;
    }


    Node* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            Node* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        return prev;
    }
