void insertAtPosition(Node*& head, int pos, int data) {
    if (pos == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* newNode = new Node(data);
    Node* temp = head;
    int count = 1;

    while (count < pos - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}
