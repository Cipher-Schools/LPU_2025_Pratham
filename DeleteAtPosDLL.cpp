void deleteAtPosition(Node*& head, int pos) {
    if (head == NULL) return;

    if (pos == 1) {
        deleteAtHead(head);
        return;
    }

    Node* temp = head;
    int count = 1;
    while (count < pos && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        return;
    }

    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    delete temp;
}
