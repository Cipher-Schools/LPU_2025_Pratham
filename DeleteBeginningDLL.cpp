void deleteAtHead(Node*& head) {
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;
    if (head != NULL)
        head->prev = NULL;
    delete temp;
}
