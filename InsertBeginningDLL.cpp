void insertAtHead(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}
