void deleteHead(Node*& head) {
    if (head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteTail(Node*& head) {
    if (head == NULL || head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    delete temp->next;
    temp->next = NULL;
}


void deleteAtPos(Node*& head, int pos) {
    if (pos == 0) {
        deleteHead(head);
        return;
    }
    Node* temp = head;
    int k = 1;
    while(k<pos-1){
      temp = temp->next;
      k++;
    }
    
    Node* delNode = temp->next;
    temp->next = temp->next->next;
}
