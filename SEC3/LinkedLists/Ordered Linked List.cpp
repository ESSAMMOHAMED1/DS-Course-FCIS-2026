#include <iostream>
#include <string>

using namespace std;

struct Node {
    string name;
    int number;
    Node *next;
};

// Global pointers (as per your style)
Node *H = NULL; 
Node *T = NULL; 

// ==================================================================================
// Add new node in SORTED order (by number/ID)
void Add_Ordered(string A, int B) {
    Node* C = new Node;
    C->name = A;
    C->number = B;
    C->next = NULL;

    // Case 1: List is empty
    if (H == NULL) {
        H = T = C;
        return;
    }

    // Case 2: New node belongs at the HEAD (smallest number)
    if (B < H->number) {
        C->next = H;
        H = C;
        return;
    }

    // Case 3: New node belongs at the TAIL (largest number)
    if (B >= T->number) {
        T->next = C;
        T = C;
        return;
    }

    // Case 4: New node belongs somewhere in the MIDDLE
    Node* temp = H;
    while (temp->next != NULL && temp->next->number < B) {
        temp = temp->next;
    }
    
    // Insert C between temp and temp->next
    C->next = temp->next;
    temp->next = C;
}

// ==================================================================================
// Safety-checked Erase Head
void Erase_Head() {
    if (H == NULL) return;
    Node* temp = H;
    H = H->next;
    if (H == NULL) T = NULL; // List became empty
    delete temp;
}

// Safety-checked Erase Tail
void Erase_Tail() {
    if (H == NULL) return;
    if (H == T) {
        delete H;
        H = T = NULL;
        return;
    }

    Node* temp = H;
    while (temp->next != T) {
        temp = temp->next;
    }
    delete T;
    T = temp;
    T->next = NULL;
}

// ==================================================================================
void Print_Nodes() {
    Node* temp = H;
    while (temp != NULL) {
        cout << "ID: " << temp->number << " | Name: " << temp->name << endl;
        temp = temp->next;
    }
}

int main() {
    // Adding IDs in random order: 4, 1, 3, 2
    Add_Ordered("gnaa", 4);
    Add_Ordered("ahmed", 1);
    Add_Ordered("mohamed", 3);
    Add_Ordered("essam", 2);

    cout << "Nodes added (1, 4, 3, 2). Sorted output:" << endl;
    Print_Nodes();

    cout << "=====================================" << endl;
    cout << "Adding ID 12 and 0..." << endl;
    Add_Ordered("essam_dev", 12);
    Add_Ordered("root", 0);
    Print_Nodes();

    return 0;
}