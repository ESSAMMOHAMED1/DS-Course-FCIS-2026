#include <iostream>
#include <string>

using namespace std;

struct Node {
    string name;
    int number;
    Node *next;
};

// Encapsulating in a class makes it professional and reusable
class LinkedList {
public:
    Node *H = NULL;
    Node *T = NULL;

    void Add_Head(string A, int B) {
        Node* C ;
        C = new Node{A, B, H}; // Initialize in one line
        if (H == NULL && T == NULL) { // First node case
            T = C;    
        } 
        
        H = C;
    }

    void Add_Tail(string A, int B) {
        Node* C = new Node{A, B, NULL};
        if (H == NULL) {
            H = T = C;
        } else {
            T->next = C;
            T = C;
        }
    }

    void Erase_Head() {
        if (H == NULL) return; // Safety check
        Node* temp = H;
        H = H->next;
        if (H == NULL) T = NULL; // List is now empty
        delete temp;
    }

    void Erase_Tail() {
        if (H == NULL) return; // List is empty
        if (H == T) {          // Only one node
            delete H;
            H = T = NULL;
            return;
        }
        
        Node* C = H;
        while (C->next != T) {
            C = C->next;
        }
        delete T;
        T = C;
        T->next = NULL;
    }

    void Print_Nodes() {
        Node* C = H;
        while (C != NULL) {
            cout << "Name: " << C->name << ", ID: " << C->number << endl;
            C = C->next;
        }
    }
};

int main() {
    LinkedList list;
    list.Add_Head("ahmed", 1);
    list.Add_Head("essam", 2);
    list.Add_Tail("mohamed", 3);
    
    cout << "--- Initial List ---" << endl;
    list.Print_Nodes();
    
    list.Erase_Tail();
    list.Erase_Head();
    
    cout << "--- After Erasing Head and Tail ---" << endl;
    list.Print_Nodes();
    
    return 0;
}