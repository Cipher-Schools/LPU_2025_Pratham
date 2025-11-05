void deleteAtTail(Node*& head) {
    if (head == NULL) return;
    if (head->next == NULL) {
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;
}
