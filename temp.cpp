void fun2(struct Node* head)
{ if(head == NULL) return;
cout << head->data << " ";
if(head->next != NULL ) fun2(head->next->next);
cout << head->data << " ";
}



int main ()
{ 
    
    
    struct Node* head = new Node(1)


};