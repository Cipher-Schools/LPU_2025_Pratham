void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPos(Node*& head, int pos, int val) {
    if (pos == 0) {
        insertAtHead(head, val);
        return;
    }
    Node* temp = head;
    int k = 1;
    while(k<pos-1){
      temp = temp->next;
      k++;
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}
