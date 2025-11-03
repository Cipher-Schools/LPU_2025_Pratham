Node* reverse(Node* head) {
    Node* pre = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* temp = curr->next;
        curr->next = pre;
        pre = curr;
        curr = temp;
    }
    return pre;
}

void reverseLL(Node* &head){
    Node* dummy = new Node(-1);
    dummy->next = head;

    Node* pre = dummy;
    Node* curr = head;
    int count = 1;

    while (count != left) {
        pre = pre->next;
        curr = curr->next;
        count++;
    }

    Node* temp1 = curr; 
    pre->next = NULL;

    while (count != right) {
        count++;
        curr = curr->next;
    }

    Node* temp2 = curr->next; 
    curr->next = NULL;

    Node* nTemp = reverse(temp1);

    pre->next = nTemp;

    curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp2;

    return dummy->next;
}
